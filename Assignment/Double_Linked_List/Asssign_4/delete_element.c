#include"dlist.h"
//fun for deleting element
int delete_element(DLink **head,DLink **tail,data_t g_data)
{
        //declaration of variable
	DLink *temp;
	temp = *head;

        //if list is empty
	if( *head == NULL)
	{
		return LIST_EMPTY;
	}
        
        //if data is not found and temp is not the last node
	while( temp -> data != g_data && temp -> next)
	{      
                //update the link
		temp = temp -> next;
	}
        
        //if data is found and temp is last node
	if(temp -> data != g_data && temp -> next == NULL)
	{
		return DATA_NOT_FOUND;
	}
        
        //if there is only one node
	if(temp == *head && temp == *tail)
	{
		*head = NULL;
		 *tail = NULL;
                //memory is free
		free(temp);
		return SUCCESS;
	}
        
        //if data is present in first node
        else if(temp == *head)
        {
         *head = (*head) -> next;
          (*head) ->prev = NULL;
           free(temp);
          return SUCCESS;
        }

         //if data is present in last node
	else if( temp == *tail)
	{
		*tail = (*tail) -> prev;
		(*tail) -> next = NULL;
		free(temp);
		return SUCCESS;
	} 
        //if data is present in mid node
	else
	{
		//temp= *head
		temp -> prev ->next = temp ->next;
		temp -> next ->prev = temp ->prev;
		free(temp);
		return SUCCESS;
	}
}

