#include <stdio.h>

void copy(char from[], char to[])
{
	int num;
	int i;
	i=0;
	while((to[i] = from[i]) != '\0')
		++i;
}
