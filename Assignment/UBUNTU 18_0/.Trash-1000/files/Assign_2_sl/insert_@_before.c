#include "slist.h"

int insert_at_before(SLink **head, data_t g_data, data_t n_data)
{
    //Check if list is empty 
    if (*head == NULL)
	return LIST_EMPTY;

    SLink *temp = *head;
    //Create new node        
    SLink *new = malloc(sizeof(SLink));
    if (new == NULL)
	return FAILURE;
    new -> data = n_data;

    if((*head)->data == g_data)
    {
	new -> link = *head;
	*head = new;
	return SUCCESS;
    }
    //If not empty 
    while ((temp))
    {
	//check if next node is given element 
	if (((temp->link)-> data ) != g_data)
	{
	    //If no element is found at all then return 
	    if (((temp->link)-> link ) == NULL)
	    {
		return DATA_NOT_FOUND;
	    }
	    temp = temp -> link;
	}
	//Establish link between newNode
	new -> link = temp -> link;
	temp -> link = new;
	return SUCCESS;
    }
}
