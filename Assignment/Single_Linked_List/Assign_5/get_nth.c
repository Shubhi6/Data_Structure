#include"slist.h"

int get_nth(SLink *head, int position)
{
        //declaration of pointer variable
	SLink *temp,*temp1; 
	temp = temp1 = head;

	int i = 1;
        
        //list is empty or not
	if( head == NULL)
	{
		return LIST_EMPTY;
	}

        //loop till end
	while(i <= position -1 && temp1 != NULL)
	{
		temp1 = temp1 ->link;
		++i;
	}
        //check list iw at last node
	if(temp1 == NULL)
	{
		return FAILURE;
	}

        //move the pointer
	while(temp1 != NULL)
	{
		temp = temp -> link;
		temp1 = temp1 -> link;
	}
	return temp -> data;


}
