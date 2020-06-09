#include"slist.h"
//fun for printing
void print_list(SLink *head)
{
	//declaration of pointer variable
	SLink *temp =head;

	//traverse till last
	while(temp != NULL)
	{       
		//printing value
		printf("%d->",temp->data);
		//updating link
		temp =temp->link;
	}
	printf("NULL\n");
}
