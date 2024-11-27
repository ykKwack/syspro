#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

int main()
{
	int count = 0;
	int data;
	struct node *p, *head = NULL;
	void push(struct node *top, int data);
	while(scanf("%d", &data) == (int)data)
	{
		p = (struct node *)malloc(sizeof(struct node));
		if(p==NULL)
		{
			perror("malloc");
			exit(1);
		}
		p->data = data;
		p->next = head;
		head = p;
	}
	printf("Print Stack\n");
	p=head;
	while(p != NULL)
	{
		count++;
		int pop(struct node *top);
		p = p->next;
	}
	exit(0);
}


