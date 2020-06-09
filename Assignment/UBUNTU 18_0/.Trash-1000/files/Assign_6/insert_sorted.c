#include "slist.h"

int insert_sorted(SLink **head, data_t n_data)
{
    //Check if list is empty 
    if ((*head) == NULL)
    {
	return FAILURE;
    }
    //Create a new node 
    SLink *new = malloc(sizeof(SLink));

    if (new == NULL)
	return FAILURE;
    //put in the data 
    new -> data = n_data;
    new -> link = NULL;

    SLink *temp = *head;
    SLink *temp1 = (*head)->link;
    //Traverse till you find the right position 
    while (temp != NULL && temp1 != NULL)
    {
	//Check condition new data between two nodes data
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
