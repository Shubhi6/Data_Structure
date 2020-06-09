#include "slist.h"

void print_list (SLink *head)
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
	    temp = temp->link;
	}
	printf("NULL\n");
    }
}
