#include "slist.h"

int reverse_iterative(SLink **head)
{
    //If the list is empty
    if (*head == NULL)
    {
	return FAILURE;
    }
    SLink *prev,*curr,*next;
    prev = NULL;
    curr = *head;
    next = NULL;

    //Make current node's link as next node
    while (curr != NULL)
    {
	//Make current node link as next node
	next = curr->link;
	//Store prev node address in current node link 
	curr->link = prev;
	//update prev node to current node 
	prev = curr;
	//update current node to next node 
	curr = next;
    }
    //update head 
    *head = prev;
    return SUCCESS;
}


