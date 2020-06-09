#ifndef HASH_H
#define HASH_H

//standard headers
#include<stdio.h>
#include<stdlib.h>

//macro
#define SUCCESS 0
#define FAILURE -1
#define TABLE_EMPTY 1
#define DATA_FOUND SUCCESS
#define DATA_NOT_FOUND FAILURE


//UDDF

typedef struct Hashtable
{
	int num;
	struct Hashtable *link;
}Hash;

Hash hash_table[key];

//fun declarations


#endif













