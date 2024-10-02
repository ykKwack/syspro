#include <stdio.h>
#include "copy.h"
#include <string.h>

char line [MAXLINE];
char longest[5][MAXLINE];
int lengths[5];

main () 
{
	int i,j;
	int len;
	int count=0;
	while(count < 5)
	{
		gets(line);
		len = strlen(line);
		copy(line, longest[count]);
		lengths[count] = len;
		count++;
	}
	for(i=0; i<count-1; i++)
	{
		for(j=i+1; j<count; j++)
		{
			if(lengths[i] < lengths[j])
			{
				int tempLen = lengths[i];
				lengths[i] = lengths[j];
				lengths[j] = tempLen;

				char tempStr[MAXLINE];
				copy(longest[i], tempStr);
				copy(longest[j], longest[i]);
				copy(tempStr, longest[j]);
			}
		}
	}
	for(i=0; i<count; i++)
	{
		printf("%s\n", longest[i], lengths[i]);
	}
}
