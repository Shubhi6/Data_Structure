#include "dlist.h"

int delete_element(DLink **head, DLink **tail, data_t g_data)
{
    //Check list empty or not
    if (*head == NULL)
    {
	return FAILURE;
    }

    //Declaring variables
    DLink *temp1 = *head;
    while (temp1->data != g_data && temp1->next)
    {
	//Update link
	temp1 = temp1 -> next;
    }

    if (temp1->data != g_data && temp1->next == NULL)
    {
	return DATA_NOT_FOUND;
    }

    //CHeck whether temp is head or not
    if (temp1 == *head)
    {
	*head = (*head) -> next;
	(*head) -> prev = NULL;
	//FRee temp
	free(temp1);
	return SUCCESS;
    }

    //Check whether temp is tail or not 
    else if (temp1 == *tail)
    {
	//Update tail -> prev
	*tail = (*tail) -> prev;
	(*tail) -> prev = NULL;
	//Free temp
	free(temp1);
	return SUCCESS;
    }
    else
    {
	//Update the values
	temp1 -> prev -> next = temp1 -> next;
	temp1 -> next -> prev = temp1 -> prev;

	return SUCCESS;
    }
}
