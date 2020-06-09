#ifndef SLIST_H
#define SLIST_H

//standard headers
#include<stdio.h>
#include<stdlib.h>

//macro
#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY 1
#define DATA_FOUND SUCCESS
#define DATA_NOT_FOUND FAILURE


//UDDF
typedef int data_t;
typedef struct snode
{
	data_t data;
	struct snode *link;
}SLink;

//fun declarations
int insert_at_last(SLink **,data_t);
int find_mid(SLink *head);
int get_nth(SLink *, data_t);
void print_list(SLink *);

#endif













