#include"insert_element.h"
//1.0Function call for insert at nth position
int insert_nth(slink **head, data_t n_pos, data_t g_data)
{
	//2.0Variable ceclaration
	int count = 0;

	//Allocating memory dynamically
	slink *new = malloc(sizeof(slink));
	
	//Updating new of data as g_data
	new -> data = g_data;

	//checking condition for pos == 1
	if(n_pos == 1)
	{
		//update new of link to head
		new -> link = *head;

		//Update head as new
		*head = new;

		return SUCCESS;
	}

	slink *temp = *head;

	while(temp != NULL)
	{
		count++;
		if(count == (n_pos - 1))
		{
			new -> link = temp -> link ;
			temp -> link = new;
			return SUCCESS;
		}
		temp = temp -> link;
	}
	return DATA_NOT_PRESENT;
}
