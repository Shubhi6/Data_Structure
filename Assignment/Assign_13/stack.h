#ifndef STACK_H
#define STACK_H

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define SIZE 100
#define SUCCESS 1
#define FAILURE 0
#define FULL 2
#define NOT_FULL 3
#define EMPTY 4
#define NOT_EMPTY 5

int stack[SIZE];

int top;

//Push the data to the stack
int push(int);

//Check the stack is full or not
int isfull();

//POP the data from the stack
int pop();

//Check the stack is empty or not 
int isempty();

//Peep the data
void peep(int);

int oper(int);

int precidence(int);

int postfix(char infix[],char post[]);

int evolution(char post[]);

void my_atoi(int *);


#endif
