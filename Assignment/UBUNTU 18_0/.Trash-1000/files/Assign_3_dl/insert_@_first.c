#include "dlist.h"

int insert_at_first (DLink **head, DLink **tail, int data)
{
    DLink *new = malloc(sizeof(DLink));

    //Check if new node is created 
    if (new == NULL)
    {
	return FAILURE;
    }

    //Update the data and link
    new -> data = data;
    new -> next = NULL;
    new -> prev = NULL;

    //Check whether, the list is empty
    if (*head == NULL)
    {
	//Update head
	*head = new;
	*tail = new;
	return SUCCESS;
    }
    else
    {
	//Establish link between newnode and first node
	(*head) -> prev = new;
	 new -> next = *head;
	 *head = new;
	 return SUCCESS;
    }
}
