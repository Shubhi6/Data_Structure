#include"dlist.h"

//fun definition
int insert_at_last(DLink **head,DLink **tail,data_t data)
{
	DLink *new = malloc(sizeof(DLink));

	//check whether node is created or not
	if(new == NULL)
	{
		return FAILURE;
	}

	//update the data and link
	new -> data=data;
	new ->next =NULL;
	new ->prev=NULL;

	//check whether the list is empty
	if(*head == NULL)
	{
		*head = new;
	}

	//transverse till the end

	else
	{ 
		new ->prev = *tail;
		(*tail)->next = new;
         }
	//establishing link between last and new node
	*tail =new;
	return SUCCESS;
}









