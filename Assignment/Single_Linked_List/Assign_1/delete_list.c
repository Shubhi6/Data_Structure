#include"slist.h"
//fun for deleting list
int delete_list(SLink **head)
{
	//declaration of pointer variable
	SLink *temp,*temp1;
	temp = *head;

	//if list is empty
	if (*head == NULL)
	{

		return LIST_EMPTY;
	}

	//if list is not empty
	else
	{       
                //loop till node is exist
		while(temp)
		{ 
			temp1 = temp;
			//update link
			temp = temp->link;
			//free memory
			free(temp1);
		}
		*head =NULL;
		return SUCCESS;
	}
}

