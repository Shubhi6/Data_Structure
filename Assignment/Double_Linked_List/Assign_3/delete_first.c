#include"dlist.h"
//fun decalration
int delete_first(DLink **head,DLink **tail)
{       
        //declaration of pointer variable
	DLink *temp;
	temp = *head;
        
        //if list is empty
	if( *head == NULL)
	{
		return LIST_EMPTY;
	} 
        //if there is only node
	else if( *head == *tail)
	{
		*head =NULL;
		*tail = NULL;
            return SUCCESS;
	}

	else
	{
		//updating head
		*head = (*head)->next;
                //assigning null
		(*head) -> prev = NULL;
		free(temp);
		return SUCCESS;
	}
}

