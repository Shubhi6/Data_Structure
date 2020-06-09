#include"dlist.h"
//fun for printing
void print_list(DLink *head)
{
	//variable decalarton
	DLink *temp =head;

	//traverse till null
	while(temp != NULL)
	{       
		//printing data
		printf("%d->",temp->data);
		// for updating lonk
		temp =temp->next;
	}
	printf("NULL\n");
}
