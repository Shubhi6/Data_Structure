#include "insert_element.h"
//1.Function for delete element
int delete_element(slink **head, int g_data)
{
	//Temporary variable
	slink *temp , *prev;
	temp = *head;
	prev = NULL;

	//2.checking list is empty or not
	if(*head == NULL)
		return FAILURE;

	//3.temporary variable declaration
	slink *temp1 = *head, *temp2 = NULL;


	//4check head of data is equal to given data or not
	if(temp -> data == g_data && temp -> link == NULL)
	{
		//4.1update the value
		*head = NULL;
		free(temp);
		return SUCCESS;
	}

	//check temp of data is equal to given data or not
	else if(temp -> data == g_data && temp -> link != NULL)
	{
		//update the valuei
		prev = temp;
		*head = temp -> link;
		free(prev);
		return SUCCESS;
	}

	while (temp -> data != g_data && temp -> link)
	{
		prev = temp;
		temp = temp -> link;
	}
	//5.Check wheather data is present or not
	if(temp ->data != g_data && temp1->link == NULL)
	{
		return DATA_NOT_PRESENT;
	}
	prev ->link = temp->link;

	//free the temp
	free(temp);
	return SUCCESS;
}

