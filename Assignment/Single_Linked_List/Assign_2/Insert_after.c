#include"slist.h"
//fun for data inserting  after given data
int insert_after(SLink **head,data_t g_data,data_t n_data)
{
        //declaratio of poiter variable
	SLink *temp;
	temp =*head;
        
        //if list is empty
	if(head == NULL)
	{
		return LIST_EMPTY;
	}

        //traverse till end
	while(temp  != NULL)
	{       
                //if data is found
		if(temp ->data == g_data)
		{   
                    //formation of new node 
                    SLink *new = malloc(sizeof(SLink));
	                
                        //check whether node is created or not
         		if(new == NULL)
			{
				return FAILURE;
			}
                        //update data
			new -> data = n_data;
			new -> link = NULL;
                        
                        //if data i present in mid node
			if(temp -> link != NULL)
			{
				new->link=temp->link;
			}
                        //if data us present in last node
			else
			{
				new->link=NULL;
			}
                        //making link
			temp->link =new;

			return SUCCESS;
		}
                //if data is not found traverse
		temp =temp->link;
	}

	return DATA_NOT_FOUND;

}



