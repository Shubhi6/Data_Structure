#include "dlist.h"

int delete_at_last(DLink **head, DLink **tail)
{
        //If the list is empty 
        if (*head == NULL)
                return LIST_IS_EMPTY;
        
	//If the list has only one node 
        if (*head == *tail)
        {
                free (*tail);
                *head = *tail = NULL;
                return SUCCESS;
        }

        //Else free the tail, the prev will be the next tail 
        *tail = (*tail)->prev;
        free((*tail)->next);
        (*tail)->next = NULL;
        return SUCCESS;
}
