#ifndef QUEUE_H
#define QUEUE_H

//Standard Headers
#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE -1
#define Q_FULL  1
#define Q_EMPTY -2
#define SIZE 3

//Function declarations
int enqueue(int *queue,int *rear,int size,int val);
int dequeue(int *queue,int *front,int rear);
int Q_full(int rear,int size);
int Q_empty(int rear,int front);
void display(int *queue,int front,int rear);

#endif
