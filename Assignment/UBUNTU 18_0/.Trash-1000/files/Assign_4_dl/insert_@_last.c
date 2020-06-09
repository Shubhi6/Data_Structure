#include "dlist.h"

int insert_at_last (DLink **head, DLink **tail, int data)
{
    DLink *new = malloc(sizeof(DLink));

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
	//Establish connection b/w new node and previous node
	(*tail) -> next = new;
	new -> prev = *tail;
	//Update  tail
	*tail = new;
	return SUCCESS;
    }
}

