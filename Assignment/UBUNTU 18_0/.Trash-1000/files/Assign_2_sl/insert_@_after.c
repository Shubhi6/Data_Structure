#include "slist.h"

int insert_at_after(SLink **head, data_t g_data, data_t n_data)
{
    //Check if list is empty 
    if (*head == NULL)
	return LIST_EMPTY;
    SLink *temp = *head;
    //If not empty 
    while (temp != NULL)
    {
	if (temp -> data == g_data)
	{
	    //If g_data is found
	    SLink *new = malloc(sizeof(SLink));

	    if (new == NULL)
	    {
		return FAILURE;
	    }
	    //Establish links
	    new -> data = n_data;
	    new -> link = temp -> link;
	    temp -> link = new;
	    return SUCCESS;
	}
	temp = temp -> link;
    }
    return DATA_NOT_FOUND;
}
