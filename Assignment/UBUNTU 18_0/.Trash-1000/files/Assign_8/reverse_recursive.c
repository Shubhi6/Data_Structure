#include "slist.h"

void reverse_recursive(SLink **head,SLink *prev,SLink *curr)
{
    //If last node has found 
    if (curr->link == NULL)
    {
	//store prev node address in curr node link 
	curr->link = prev;
	//update head
	*head = curr;
	return;
    }
    //move to the next node
    SLink *next = curr->link;
    //change the curr node link to point to prev
    curr->link = prev;
    //send curr node as prev and next node as curr
    return reverse_recursive(head,curr,next);
}

