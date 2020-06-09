#ifndef SLIST_H
#define SLIST_H

//Standard Headers
#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE -1
#define DATA_NOT_FOUND -1
#define LIST_EMPTY -1

//UDDF
typedef int data_t;
typedef struct snode
{
    data_t data;
    struct snode *link;
}SLink;

int insert_at_last(SLink **, data_t);
int insert_at_first(SLink **, data_t);
int delete_at_first(SLink **);
int delete_at_last(SLink **);
int delete_list(SLink **);
int find_node(data_t, SLink *);
void print_list(SLink *);

#endif
