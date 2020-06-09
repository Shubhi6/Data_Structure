#include "hash.h"

int search_num(int num,numbers *hash_table)
{

    if (hash_table == NULL)
    {
	return FAILURE;
    }
    numbers *temp = hash_table;

    if (temp->num == num)
    {
	return DATA_FOUND;
    }
    else
    {
	while (temp->num != num && temp != NULL)
	{
	    temp = temp->link;
	}
	return DATA_FOUND;
    }
    return DATA_NOT_FOUND;
}
