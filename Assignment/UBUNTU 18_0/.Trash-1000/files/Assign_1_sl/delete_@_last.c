#include "slist.h"

int delete_at_last(SLink **head)
{
    SLink *curr, *prev;
    curr = *head;
    prev = NULL;

    //Check list is empty or not
    if (*head == NULL)
    {
	return FAILURE;
    }

    //Check first node link is NULL or not
    if ((*head) -> link == NULL)
    {
	free(*head);
	return SUCCESS;
    }
    else
    {
	//Traverse through till Last node
	while(curr -> link != NULL)
	{
	    //Update current node to previous node
	    prev = curr;
	    //Moving node to next node
	    curr = curr -> link;
	}
	//Free the node
	free(curr);
	prev -> link = NULL;
	return SUCCESS;
    }
}

