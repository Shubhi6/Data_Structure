#include "hash.h"

int insert_num(int num,numbers **hash_table)
{
    numbers *new = malloc(sizeof(numbers));
    if (new == NULL)
    {
	return FAILURE;
    }
    new->num = num;
    new->link = NULL;

    if (*hash_table == NULL)
    {
//	(*hash_table)->num = new->num;
//	(*hash_table)->link = NULL;
	*hash_table = new;
	return SUCCESS;
    }
    else
    {
	numbers *temp = *hash_table;
	while (temp->link)
	{
	    temp = temp->link;
	}
	temp->link = new;
    }
    return SUCCESS;
}

void create_node(numbers **hash_table,int size)
{
    for (int i = 0; i < size; i++)
    {
	
	hash_table[i] = (numbers *)NULL;
    }
}



