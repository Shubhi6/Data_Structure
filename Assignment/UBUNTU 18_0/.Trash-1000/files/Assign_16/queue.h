#ifndef QUEUE_H
#define QUEUE_H

//Standard Headers
#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE -1
#define Q_FULL  1
#define Q_EMPTY 2
#define SIZE 10

//UDDF
typedef int data_t; 
typedef struct Queue
{
    data_t data;
    struct Queue* link;
}qlist;

//Function declarations
int enqueue(qlist **rear,qlist **front,data_t val);
int dequeue(qlist **rear,qlist **front,data_t);
void display(qlist *front);

#endif
