#include "slist.h"

int delete_at_last(SLink **head)
{
	//Declaring structure pointers
	SLink *prev;

	//Copy head to temp variable
	SLink *temp = *head;

	//Check list is empty or not
	if ((*head) == NULL)
	{
		return LIST_EMPTY;
	}

	//Check whether the list contains only one elemnent
	if (temp -> link == NULL)
	{
		free(*head);
		*head = NULL;
		return SUCCESS;
	}

	//Travesing till end
	while (temp -> link)
	{
		//Updating the previous node
		prev = temp;
		temp = temp -> link;
	}
	prev -> link = NULL;

	//Delete the current node
	free(temp);
	return SUCCESS;

}
