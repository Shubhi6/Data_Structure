#include "dlist.h"

int insert_at_after(data_t g_data, data_t n_data, DLink **head, DLink **tail)
{
    DLink *temp = *head;
    
    //Check list is empty or not
    if (*head == NULL)
    {
	return LIST_IS_EMPTY;
    }
 
    //Traverse till end 
    while (temp != NULL)
    {
        //Check given g_data is equal to data in node
	if (temp -> data == g_data)
	{
            //Create new node
	    DLink *new = malloc(sizeof(DLink));
            
            //Check node is created or not
	    if (new == NULL)
	    {
		return FAILURE;
	    }
            //Assign data and links to new node
	    new -> data = n_data;
	    new -> next = temp -> next;
	    new -> prev = temp;

	    if (temp -> next != NULL)
	    {
		temp -> next -> prev = new;
	    }
	    else
	    {
		*tail = new;
	    }
	    temp -> next = new;
	    return SUCCESS;
	}
	temp = temp -> next;

    }
	return DATA_NOT_FOUND;
}

