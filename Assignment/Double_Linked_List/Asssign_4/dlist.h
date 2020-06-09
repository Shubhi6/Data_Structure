#ifndef DLIST_H
#define DLIST_H

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
	struct snode *next;
        struct snode *prev;
}DLink;

//insert a node in the last of the list
int insert_at_last(DLink **head,DLink **tail,data_t data);
int insert_at_after(DLink**,DLink**,data_t,data_t);
int insert_before(data_t g_data,data_t n_data,DLink **head,DLink **tail);
int delete_element(DLink **head,DLink **tail,data_t );
//print the element in the list
void print_list(DLink *);

#endif













