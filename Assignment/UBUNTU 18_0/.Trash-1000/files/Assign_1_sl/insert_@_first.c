#include "slist.h"

int insert_at_first (SLink **head, int data)
{
    SLink *new = malloc(sizeof(SLink));

    //Check if new node is created 
    if (new == NULL)
    {
	return FAILURE;
    }

    //Update the data and link
    new -> data = data;
    new -> link = NULL;

    //Check whether, the list is empty
    if (*head == NULL)
    {
	//Update head
	*head = new;
	return SUCCESS;
    }
    else
    {
	//Establish link between newnode and first node
	new -> link = *head;
	*head = new;

	return SUCCESS;
    }
}
