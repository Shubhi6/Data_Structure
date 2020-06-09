#include"dlist.h"
//fun for inserting first
int insert_at_first(DLink **head,DLink **tail,data_t data)
{
        //new node formation
        DLink *new = malloc(sizeof(DLink));
        
        //check whether node is created or not
	if(new == NULL)
	{
		return FAILURE;
	}
        
        //updating the value of node
	new -> data=data;
	new -> next =NULL;
	new -> prev =NULL;
        
        //if no element on list
	if(*head == NULL)
	{
		*head = new;
		*tail = new;
		return SUCCESS;
	}

        //if node is present
	else
	{       
                //updating the address of head
                new->prev=*head;
		new  ->next =*head;
		*head =new;

		return SUCCESS;
	}
	return FAILURE;
}
