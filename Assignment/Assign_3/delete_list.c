#include"dlist.h"
//fun for deleting
int delete_list(DLink **head)
{
        //declartion of pointer variable
	DLink *temp;
	temp = *head;
        
        //if list is empty
	if( *head == NULL)
	{
		printf("NO ELEMENT!!\n");
		return LIST_EMPTY;
	}

	else
	{

                while( temp -> next != NULL)
               	{
                //update the link
                temp = temp -> next;
                //update the iterator to the next link                     
                (temp -> prev) -> next = NULL;
                 free (temp -> prev);
		}
                //free memory
		free(temp);
                //assigning NULL to head
		*head =NULL;
		return SUCCESS;
	}
}

