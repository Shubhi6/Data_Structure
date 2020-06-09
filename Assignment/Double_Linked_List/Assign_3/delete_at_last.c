#include"dlist.h"

//fun for deleting at last
int delete_last(DLink **head,DLink **tail)
{
        //declaration of pointer variable
	DLink *pre;
	pre =*head;
	DLink *cur = pre ->next;
        
        //if no element on list
	if (*head == NULL)
	{
	  return LIST_EMPTY;
	}
         //if there is only element
         if (*head == *tail)
	{
		*head =NULL;
		*tail = NULL;
                return SUCCESS;
	}
        
         else
         {
           *tail = pre -> next;
	    pre ->next =NULL;
            free(cur);
            return SUCCESS;
          }
}