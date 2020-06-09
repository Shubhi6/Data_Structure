#include"slist.h"

//fun for deleting element
int delete_element(SLink **head,int element)
{       
        //declaration of pointr variable
        SLink *temp,*prev;
	temp = *head;
        
        //if list is empty
	if(*head == NULL)
	{
		printf("No element!!");
		return FAILURE;
	}
        
        //loop while it is not last node and data is not found
	while( temp != NULL && temp -> data != element)
	{
		prev = temp;
		temp = temp -> link;
	}

        //if data is not found
	if(temp == NULL)
	{
		return DATA_NOT_FOUND;
	}

        //it there is only one node
	if(prev == NULL)
	{
		prev = temp;
		temp = temp -> link;
		free(prev);
		*head = temp;
		return SUCCESS;
	}

         //if it is last node
	else if(temp -> link == NULL)
	{
		prev -> link = temp -> link;
		free(temp);
		return SUCCESS;
	
        }
        //if the data in mid
	else
	{
		prev -> link = temp ->link;
		free(temp);
		return SUCCESS;
	}
}

