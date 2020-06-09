#include"slist.h"
//fun definition
int find_mid(SLink *head)
{
	//if list is empty
	if (head == NULL)
	{
		printf("NO ELEMENT!!\n");
		return LIST_EMPTY;
	}
        
        //declaration of variable
        SLink *temp,*temp1;
	temp1 = head;
	temp = head;

	//condition for traversing data
        while( temp1 -> link != NULL  && temp1 -> link -> link != NULL) 
	{
		temp = temp ->link;
		temp1= temp1 -> link->link ;
	}
        //for printing data on failure
	printf("%d",(temp -> data));
	return SUCCESS;

}
