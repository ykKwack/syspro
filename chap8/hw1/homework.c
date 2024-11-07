#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>

int main(int argc, char *argv[])
{
	char **ptr;
	extern char **environ;

	for(ptr = environ; *ptr !=0; ptr++)
		printf("%s \n", *ptr);
	printf("-u : %d, %d\n", getuid(), geteuid());
	printf("-g : %d, %d\n", getgid(), getegid());
	printf("-i : %d\n", getpid());
	printf("-p : %d\n", getppid());

	exit(0);
}
