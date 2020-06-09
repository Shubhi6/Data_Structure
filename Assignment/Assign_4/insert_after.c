#include"dlist.h"

//fun for inserting after
int insert_at_after(DLink **head,DLink **tail,data_t g_data,data_t n_data)
{
        //declaration of variable
	DLink *temp;
        temp = *head;

        //if list is empty
	if( *head == NULL)
	{
		return LIST_EMPTY;
	}

        //traverse till end
	while (temp != NULL)
	{       
                //compare the list data with desired data
		if(temp ->data == g_data)
		{       
                        //formation of new node
			DLink *new = malloc(sizeof(DLink));
                        //check either node is created or not
			if(new == NULL)
			{
				return FAILURE;
			}
                        //updatig the node data
                        new -> data = n_data;
			new -> next = temp ->next;
			new ->prev = temp;
                        
                        //if node is not the last node
			if(temp -> next != NULL)
			{
				temp ->next ->prev =new;
			}
                        //if there is only one node
			else
			{
				*tail = new;
			}
			temp ->next =new;
                        return SUCCESS;
		}
                //if data is not found traverse till last
		temp = temp->next;

	}
	return DATA_NOT_FOUND;
}

