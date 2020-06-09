#include "dlist.h"

int delete_at_first(DLink **head, DLink **tail)
{
        //If list is empty 
        if (*head == NULL)
                return LIST_IS_EMPTY;
        
	//If list has only one node 
        if (*head == *tail)
        {
                free(*head);
                *head = *tail = NULL;
                return SUCCESS;
        }

        //Else free the head, next node will be the head 
        *head = (*head)->next;
        free((*head)->prev);
        (*head)->prev = NULL;
        return SUCCESS;
}
