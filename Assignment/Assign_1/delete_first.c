#include"slist.h"

//fun definition
int delete_at_first(SLink **head)
{
	//declaration of variable pointer
	SLink *temp;
	temp = *head;

	//if list is empty
	if( *head == NULL)
	{
		printf("No element!!");
		return FAILURE;
	}

	//if list is not empty
	else
	{
		//updating the link 
		*head = (*head)->link;
		free(temp);
		return SUCCESS;
	}
}

