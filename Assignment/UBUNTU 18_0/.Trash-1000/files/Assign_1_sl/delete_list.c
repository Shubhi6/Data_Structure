#include "slist.h"

int delete_list (SLink **head)
{
    SLink *temp , *temp1;
    temp = *head;

    //Check list is empty or not
    if (*head == NULL)
    {
	printf("LIST IS EMPTY\n");
    }
    else
    {
	//If list non-empty
	while (temp)
	{
	    //Take the reference to delete the node 
	    temp1 = temp;
	    //update the iterator to the next node
	    temp = temp -> link;
	    free(temp1);
	}
	//Update the linked list as empty list
	*head = NULL;
	return SUCCESS;
    }
    return FAILURE;
}

