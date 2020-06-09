#include "dlist.h"

int delete_list(DLink **head, DLink **tail)
{
    //Check whether list os empty or not 
    if (*head == NULL)
    {
	//If empty 
	return LIST_IS_EMPTY;
    }
    else
    {
	DLink *temp;
	temp = *head;	
	//If non-empty 
	while (temp -> next != NULL)
	{
	    //Take the reference to delete the node
	    temp = temp -> next;
	    //update the iterator to the next node
	    (temp -> prev) -> next = NULL; 
	    free(temp -> prev);
	}
	//Update the linked list as empty list
	*head = NULL;
	*tail = NULL;
	return SUCCESS;
    }
    return FAILURE;
}
