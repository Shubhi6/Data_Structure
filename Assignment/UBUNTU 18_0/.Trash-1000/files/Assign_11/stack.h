#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define STACK_EMPTY 1
#define STACK_FULL -1
#define FAILURE 2
#define SIZE 5

//Function declarations
int push(int *,int,int *,int);
int pop(int *,int *);
void peak(int *,int);
void peep(int *,int);
#endif

