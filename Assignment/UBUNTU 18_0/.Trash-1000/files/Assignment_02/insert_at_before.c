#include "insert_element.h"
//1Function call for inser at before
int insert_at_before(slink **head, data_t e_data, data_t n_data)
{

	//check whether the list is empty or not
	if(*head == NULL)

	{
		return LIST_EMPTY;
	}

	//copy head to temp
	slink *temp = *head;

	//Traverse till end
	while(temp != NULL)
	{

		//compare give data
		if(e_data == temp -> data)
		{
			slink *new = malloc(sizeof(slink));

			//check whether the node is created or not
			if(new == NULL)
			{
				return FAILURE;
			}

			//update new node with data and link
			new -> data = n_data;
			new -> link = temp -> link;
			return SUCCESS;
		}
		temp = temp -> link;
	}
	return DATA_NOT_PRESENT;

}
