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
#define LOOP_DETECTED 0
#define LOOP_NOT_DETECTED -1

//UDDF
typedef int data_t;
typedef struct snode
{
    data_t data;
    struct snode *link;
}SLink;

int insert_at_last(SLink **, data_t);
int create_loop(SLink **,data_t);
int find_loop(SLink *);
int insert_sorted(SLink **,data_t); 
void print_list(SLink *);

#endif
