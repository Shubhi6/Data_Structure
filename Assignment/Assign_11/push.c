#include "stack.h"

//Function to check stack full or not
int Is_full (int top,int size)
{
    if (top == size)
    {
	return 1;
    }
    else
    {
	return 0;
    }
}

//Function to push data to stack
int push (int *Stack, int size, int *top, int data)
{
    //Check stack full or not
    if (Is_full(*top,size))
    {
	return STACK_EMPTY;
    }
    else
    {
	//Else,push data
	Stack[*top] = data;
	(*top)++;

    }
    return SUCCESS;
}




