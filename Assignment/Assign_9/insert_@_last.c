#include "slist.h"

int insert_at_last (SLink **head, int data)
{
    SLink *new = malloc(sizeof(SLink));

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
    //Take a local reference of head 
    SLink *temp;
    temp = *head;

    //Traverse till the last node
    while(temp -> link)
    {
	temp = temp -> link;
    }

    //Establish link between last - new node and update till
    (temp -> link) = new;
    return SUCCESS;
}

