#include <stdio.h>

int main(int argc, char *argv[])
{
	int child, pid, status;
	pid = fork();
	if(pid == 0)
	{
		execvp(argv[1], &argv[1]);
		fprintf(stderr, "%s:Execute Fail\n", argv[1]);
	}
	else
	{
		child = wait(&status);
		printf("[%d] Child process %d end\n", getpid(), pid);
		printf("\tend code %d \n", status >> 8);
	}
}
