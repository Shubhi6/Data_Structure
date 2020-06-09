#include "slist.h"

int insert_sorted(SLink **head, data_t n_data)
{

    //Create a new node 
    SLink *new = malloc(sizeof(SLink));

    if (new == NULL)
    {
	return FAILURE;
    }
    //put in the data 
    new -> data = n_data;
    new -> link = NULL;
    //Check list is empty or not
    if (*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }
    //If single node
    if ((*head) -> link == NULL)
    {
	if ( ((*head) -> data) >= n_data )
	{
	    new -> link = *head;
	    (*head) = new;
	    return SUCCESS;
	}
	else
	{
	    (*head) -> link = new;
	    return SUCCESS;
	}
    }
    
    SLink *temp = *head;
    SLink *temp1 = (*head)->link;
    //Multiple nodes
    while (temp != NULL && temp1 != NULL)
    {
	if (n_data >= temp->data && n_data <= temp1->data)
	{
	    temp->link = new;
	    new->link = temp1;
	    return SUCCESS;
	}
	temp = temp->link;
	temp1 = temp->link;
    }
    //Check new data greater than first data
    if (n_data > temp->data)
    {
	temp->link = new;
	new->link = temp1;
	return SUCCESS;
    }
    //Check new data less than first data
    if (n_data < temp->data)
    {
	//temp->link = new;
	new -> link = *head;
	*head = new;
	return SUCCESS;
    }

    free(new);
    return FAILURE;
}
