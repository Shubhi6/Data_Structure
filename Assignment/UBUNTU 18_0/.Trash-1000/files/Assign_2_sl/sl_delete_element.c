#include "slist.h"

int delete_element(SLink **head, data_t g_data)
{
    //Temporary variables
    SLink *temp, *prev;
    temp = *head;
    prev = NULL;

    //Check list empty or not
    if (*head == NULL)
    {
	return FAILURE;
    }

  
    //Check head of data is equal to given data or not
    if (temp->data == g_data && temp->link == NULL )
    {
	*head = NULL;
	free(temp);
	return SUCCESS;
    }
    else if (temp->data == g_data && temp->link != NULL)
    {
	//update value
	prev = temp;
	*head = temp -> link;
	free(prev);
	return SUCCESS;
    }
    while (temp->data != g_data && temp->link)
    {
	//update value
	prev = temp;
	temp = temp -> link;
    }

    //Check whether data is present or not
    if (temp->data != g_data && temp->link == NULL)
    {
	return DATA_NOT_FOUND;
    }
    prev -> link = temp -> link;
    //free the temp
    free(temp);
    return SUCCESS;
}



