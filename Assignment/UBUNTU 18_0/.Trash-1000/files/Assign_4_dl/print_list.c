#include "dlist.h"

void print_list (DLink *head)
{
    struct snode *temp;

    if (head == NULL)
    {
	printf("LIST IS EMPTY\n");
    }
    else
    {
	//Take reference to traverse through the link
	temp = head;
	
	//Iterate and print
	while (temp != NULL)
	{
	    printf("%d->", temp->data);
	    temp = temp->next;
	}
	printf("NULL\n");
    }
}
