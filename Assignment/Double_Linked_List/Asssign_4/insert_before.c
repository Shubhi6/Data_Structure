#include "dlist.h"

int insert_before(data_t g_data,data_t n_data,DLink **head,DLink **tail)
{
	//Check if list is empty 
	if (*head == NULL)
	{
             	return LIST_EMPTY;
        }

	DLink *temp = *head;
	//If not empty 
	DLink *new = malloc(sizeof(DLink));
	new -> data = n_data;
	new -> prev = NULL;
	new -> next = NULL;

	if (temp -> data == g_data)
	{
		new -> next = temp;
		temp -> prev = new;
		*head = new;
		return SUCCESS;
	}
	while (temp != NULL && temp -> data != g_data)
	{
              	temp = temp -> next;
        }
	//If the given data is not found
	if (temp == NULL)
	{
	return DATA_NOT_FOUND;
        }

	temp = temp -> prev;

	//Establish the links 
	DLink *temp1 = temp->next;
	temp->next = new;
	new->prev = temp;

	new->next = temp1;
	temp1->prev = new;
	return SUCCESS;
}

