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

int insert_after(SLink **head,data_t g_data,data_t n_data);
int insert_before(SLink **head,data_t g_data,data_t n_data);


int delete_element(SLink **head,data_t element);
int insert_nth(SLink **head, data_t position, data_t n_data);
//print the element in the list
void print_list(SLink *);

#endif













