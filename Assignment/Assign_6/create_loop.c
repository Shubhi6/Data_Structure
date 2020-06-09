#include "slist.h"

int create_loop(SLink **head, data_t data)
{
	//Check list empty or not
	if (*head == NULL)
	{
		return FAILURE;
	}
	SLink *temp1,*temp2;
	temp1 = temp2 = *head;

	//Traverse till end
	while (temp1->link != NULL)
	{
		if  (temp2->data != data)
		{
			temp2 = temp2->link;
		}
		temp1 = temp1->link;
	}
	//Make loop from last node to given node
	temp1->link = temp2;
	return SUCCESS;
}
