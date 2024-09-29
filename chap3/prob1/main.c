#include <stdio.h>
#include "copy.h"
#include <string.h>

char line [MAXLINE];
char longest[MAXLINE];

main () 
{
	int len;
	int max;
	int count =0;
	max = 0;
	while(count < 5)
	{
		count++;
		gets(line);
		len = strlen(line);
		if(len>max)
		{
			max=len;
			copy(line, longest);
		}
	}
	while(count != 0)
	{
		printf("%s \n", longest);
		count--;
	}
}
