#include "insert_element.h"
//1.function call for insert after
int insert_after(slink **head, data_t e_data, data_t n_data)
{
	//2.check head is null or not
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	//3.temporary variable declaration
	slink *temp = *head;

	//Traverse till end
	while(temp != NULL)
	{

		//Compare given data
		if(e_data == temp -> data)
		{
			//If data found create a node
			slink *new = malloc(sizeof(slink));

			//Check whether the node is created or not
			if(new == NULL)
			{
				return FAILURE;
			}

			//Update new node with data and link
			new -> data = n_data;
			new -> link = temp -> link;
			temp -> link = new;
			return SUCCESS;
		}

		//Update temp to next temp
		temp = temp -> link;
	}
	return DATA_NOT_PRESENT;

}





