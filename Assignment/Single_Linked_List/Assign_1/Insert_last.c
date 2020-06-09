#include"slist.h"

//fun definition
int insert_at_last(SLink **head,data_t data)
{
	//declaration of variable
	SLink *temp;
	temp = *head;

	//create a node
	SLink *new = malloc(sizeof(SLink));

	//check whether node is created or not
	if(new == NULL)
	{
		return FAILURE;
	}

	//update the data and link
	new -> data=data;
	new ->link =NULL;

	//check whether the list is empty
	if(*head == NULL)
	{
		*head = new;
		return SUCCESS;
	}

	
	//transverse till the end
	while(temp ->link)
	{
		temp =temp->link;
	}

	//establishing link between last and new node
	(temp ->link) =new;
	return SUCCESS;
}









