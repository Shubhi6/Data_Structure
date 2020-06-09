#include "slist.h"

int sl_sort(SLink **head,SLink **head1)
{
    //Check list empty or not 
    if ((*head) == NULL)
    {
	return FAILURE;
    }
    //Check list contains only one node
    if ((*head) -> link == NULL)
    {
	return SUCCESS;
    }

    SLink *temp = *head;
    SLink *temp1, *prev, *prev1, *min = *head;
    int count;

    //Traverse till link becomes NULL
    while (temp->link)
    {
	count = 0;
	temp1 = temp->link;
	min = temp;
	prev = temp;

	//Traverse till node becomes NULL
	while (temp1)
	{
	    //Compare current data with next data
	    if (min->data > temp1->data)
	    {
		prev1 = prev;
		min = temp1;
		count++;
	    }
	    //Move to next node
	    prev = temp1;
	    //Move to next node
	    temp1 = temp1->link;
	}

	//Take minimum data out
	if (count)
	{
	    prev1->link = min->link;
	    temp = *head;
	}
	else
	{
	    *head = (*head)->link;
	    temp = *head;
	}
	min->link = NULL;
	//Check list empty or not
	if (*head1 == NULL)
	{
	    //Make minimum data to head1
	    *head1 = min;
	}
	else
	{
	    SLink *temp3 = *head1;
	    //Traverse till last node 
	    while (temp3->link)
		temp3 = temp3->link;
	    temp3->link = min;
	}
    }
    temp = *head1;
    while (temp->link)
	temp = temp->link;
    //Last node at the end 
    temp->link = *head;
    *head = *head1;

    return SUCCESS;
}


