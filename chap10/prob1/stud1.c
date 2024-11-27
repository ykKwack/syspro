#include <stdio.h>
#include <stdlib.h>

struct student{
	int id;
	char name[20];
};

int main()
{
	struct student *ptr;
	int n, i;

	printf("How many student will you enter? >> ");
	scanf("%d", &n);
	if(n <= 0)
	{
		fprintf(stderr, "Error : Wrong number of student.\n");
		fprintf(stderr, "Close program.\n");
		exit(1);
	}
	else
	{
		ptr = (struct student *) malloc(n * sizeof(struct student));
		if(ptr == NULL)
		{
			perror("malloc");
			exit(2);
		}

			printf("Enter id and name of %d students.\n", n);
			for(i =0; i<n; i++)
				scanf("%d %s", &ptr[i].id, ptr[i].name);

			printf("\n * student information(reversed) *\n");
			for(i = n-1; i >= 0; i--)
				printf("%d %s\n", ptr[i].id, ptr[i].name);
			printf("\n");
			exit(0);
	}
}

