#ifndef DLIST_H
#define DLIST_H

//Standard Headers
#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE -1
#define DATA_NOT_FOUND -1;
#define LIST_IS_EMPTY -1;

//UDDF
typedef int data_t;
typedef struct snode
{
    data_t data;
    struct snode *next;
    struct snode *prev;
}DLink;

int insert_at_last(DLink **, DLink **, data_t);
int insert_at_first(DLink **, DLink **, data_t);
int delete_at_first(DLink **,DLink **);
int delete_at_last(DLink **,DLink **);
int delete_list(DLink **,DLink **);

void print_list(DLink *);

#endif
