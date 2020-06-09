#include "slist.h"

int insert_Nth(SLink **head, int position, data_t n_data)
{
    int count = 0;
    //Check if the list is empty 
    if (*head == NULL)
    {
	return FAILURE;
    }
    //If not empty 
    int i;
    SLink *temp = *head;
    //Create new node
    SLink *new = malloc(sizeof(SLink));
    new->data = n_data;

    //If position is 1,need to change head pointer
    if (position == 1)
    {
	new -> link = *head;
	*head = new;
	return SUCCESS;
    }

    //If insert at middle of nodes,traverse (n-1) nodes
    while (temp != NULL)
    {
	count++;
	if (count == (position - 1))
	{

	    //Establish links b/w new node to next node of pointer temp
	    new -> link = temp -> link;
	    temp -> link = new;
	    return SUCCESS;
	}
	temp = temp -> link;
    }
}


