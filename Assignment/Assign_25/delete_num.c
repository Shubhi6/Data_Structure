#include "hash.h"

int delete_num(int num,numbers **hash_table)
{
    if (*hash_table == NULL)
    {
	return FAILURE;
    }
    numbers *temp = *hash_table;
    numbers *temp1 = *hash_table;
    numbers *curr;
    if (temp->num == num)
    {
	*hash_table = temp->link;
	return SUCCESS;
    }
    else
    {
	while (temp1->link)
	{
	    if (temp1->link->num == num)
	    {
		curr = temp1->link;
		temp1->link = curr->link;
		free(curr);
		return SUCCESS;
	    }
	    temp1 = temp1->link;
	}
    }
    return FAILURE;
}



