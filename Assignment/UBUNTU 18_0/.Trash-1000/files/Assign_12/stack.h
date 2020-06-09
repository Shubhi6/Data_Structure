#ifndef SLIST_H
#define SLIST_H

//standard headers
#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE -1 
#define DATA_FOUND 1
#define DATA_NOT_FOUND -2
#define STACK_EMPTY -3

//UDDf
typedef int data_t;
typedef struct snode
{
    data_t data;
    struct snode *link;

}Stack;

//Function declarations
int push(Stack **, data_t);
void peep(Stack *);
int pop(Stack **);
int peak(Stack *);

#endif
