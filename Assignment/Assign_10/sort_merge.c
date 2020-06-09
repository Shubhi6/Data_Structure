#include "slist.h"

void link_last(SLink **head, SLink *min)
{
        /* connect nodes at the end each time */
        min->link = NULL;
        if (*head == NULL)
                *head = min;
        else
        {
                SLink *temp = *head;
                /* traverse till last node */
                while (temp->link)
                        temp = temp->link;
                temp->link = min;
        }
}

int sorted_merge(SLink **head, SLink **head1, SLink **head2)
{
    /* Check if any of the lists is empty */
    if (*head1 == NULL && *head2 == NULL)
	return LIST_EMPTY;

    if (*head1 == NULL && *head2 != NULL)
    {
	link_last(head, *head2);
	return SUCCESS;
    }

    if (*head2 == NULL && *head1 != NULL)
    {
	link_last(head, *head1);
	return SUCCESS;
    }
    /* If both lists are not empty, merge them into one */
    SLink *prev = NULL, *prev1 = NULL;
    SLink *temp1 = *head1;
    SLink *temp2 = *head2;

    while (temp1)
    {
	temp2 = *head2;
	while (temp2)
	{
	    if ((temp2)->data <= temp1->data)
	    {
		if (temp2 == *head2)
		{
		    *head2 = temp2->link;
		    link_last(head, temp2);
		    temp2 = *head2;
		    continue;
		}
		prev1->link = temp2->link;
		link_last(head, temp2);
		temp2 = prev1->link;
		continue;
	    }
	    prev1 = temp2;
	    temp2 = temp2->link;
	}
	prev = temp1;
	temp1 = temp1->link;
	link_last(head, prev);
    }

    temp2 = *head2;
    while (temp2)
    {
	prev1 = temp2;
	temp2 = temp2->link;
	link_last(head, prev1);
    }
    *head1 = *head2 = NULL;
    return SUCCESS;
}
