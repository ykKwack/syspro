#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf("Parent process Start\n");
	if(fork() == 0)
	{
		execl("/bin/echo", "echo", "hello", NULL);
		fprintf(stderr, "first fail");
		exit(1);
	}
	printf("parental process end\n");
}
