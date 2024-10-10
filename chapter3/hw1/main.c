#include <stdio.h>
#include <string.h>
#include "copy.h"

char line[MAXLINE];
char longest[MAXLINE];

main()
{
	int len;
	int max;
	max=0;
	int i; 
	for(i=0; i<5; i++)
	{
		gets(line);
		len=strlen(line);

		if(len > max)
		{
			max = len;
			copy(line, longest);
		}
	}
	for(i=0; i<5; i++)
	{
	printf("%s \n", longest);
	}
}

