#include "hash.h"

void print_table(numbers **hash_table)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
	numbers *temp = hash_table[i];
	printf("hash_table[%d]",i);

	while(temp)
	{
	    printf("%d->",temp->num);
	    temp = temp->link;
	
	}
	printf("NULL\n");
    }
}
