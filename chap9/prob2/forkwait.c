#include <sys/types.h>

int main()
{
	int pid, child, status;
	printf("[%d] Parental Process START \n", getpid());
	pid = fork();
	if(pid ==0)
	{
		printf("[%d] Child Process START \n", getpid());
		exit(1);
	}
	child = wait(&status);
	printf("[%d] Child Process %d end\n", getpid(), child);
	printf("\tend code %d\n", status >> 8);
}
