#include <stdio.h>
#include "copy.h"
#include <string.h>

char line[MAXLINE];
char longest[5][MAXLINE];
int lengths[5];

main () 
{
	char temp[MAXLINE];
	int len;
	int max;
	int count =0;
	while(count < 5)
	{
		gets(line);
		len=strlen(line);
		copy(line, longest[count]);
		lengths[count] = len;
		count++;
	}
	for(int i=0; i<count-1; i++)
	{
		for(int j=0; j<count; j++)
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
