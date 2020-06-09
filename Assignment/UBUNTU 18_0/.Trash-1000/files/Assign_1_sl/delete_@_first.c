#include "slist.h"

int delete_at_first(SLink **head)
{
    SLink *temp;
    temp = *head;

    //Check list is empty or not
    if ((*head) == NULL)
    {
	return FAILURE;
    }

    //Check whether list contains only one node
    if ((*head) -> link == NULL)
    {
	free(*head);
	return SUCCESS;
    }
    //Else,list contains multiple nodes
    else
    {
	(*head) = ((*head) -> link);
	free(temp);
	return SUCCESS;
    }
}


    
