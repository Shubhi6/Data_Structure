#include"slist.h"
//fun for inserting first
int insert_at_first(SLink **head,data_t data)
{

        //declaration of pointer variable
	SLink *temp;
	temp = *head;
        //formation of new node
	SLink *new = malloc(sizeof(SLink));
        //conditon for checking node 
	if(new == NULL)
	{
		return FAILURE;
	}
       
        //assigning values in new node
	new -> data=data;
	new ->link =NULL;
        
        //if list is empty
	if(*head == NULL)
	{
                //assigning the address in head
		*head = new;
		return SUCCESS;
	}

	//if list is not empty
	else
	{       //assigning first
		new ->link =*head;
		*head =new;
                 return SUCCESS;
	}
	return FAILURE;
}
