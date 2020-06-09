#include "slist.h"

int insert_before(SLink **head, data_t g_data, data_t n_data)
{ 
    // take a local reference of head 
    SLink *temp;
    temp = *head;

    // check for if list is empty 
    if (NULL == (*head))
    {
	return LIST_EMPTY;
    }

    //create newNode and update newnode data and link
    SLink *new = malloc(sizeof(SLink));
    if (NULL == new)
    {
	return FAILURE;
    }

    new -> data = n_data;
    new -> link = NULL;

    // check for if list has only one node 
    if ( ((*head) -> link) == NULL)
    {
	// if the node is the given element before which we need to add newNode
	if (((*head) -> data) == g_data)
	{
	    //establish link between newnode and first node
	    new -> link = *head;
	    //update head
	    (*head) = new;
	    return SUCCESS;
	}
	else
	{
	    return FAILURE;
	}
    }
    // check for multi node case 
    else
    {
	// If the element is in the head 
	if( ((*head) -> data) == g_data)
	{
	    //establish link between newnode and first node
	    new -> link = *head;
	    //update head
	    (*head) = new;
	    return SUCCESS;
	}
	// If the element is in the middle or end 
	else
	{
	    // if list has multiple nodes then, iterate till tail node 
	    while ((temp -> link))
	    {
		// check if next node is given element 
		if (((temp->link)-> data ) != g_data)
		{
		    // if no element is found at all then return 
		    if (((temp->link)-> link ) == NULL)
		    {
			return  FAILURE;
		    }
		    temp = temp -> link;
		}
		else
		{
		    // if element is present break 
		    break;
		}
	    }

	    // establish link between newNode and current node
	    //temp2 = temp;
	    new -> link = temp -> link;
	    (temp -> link) = new;
	    return SUCCESS;
	}
    }
    return FAILURE;
}
