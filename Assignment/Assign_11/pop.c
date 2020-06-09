#include "stack.h"

//Check Stack is empty or not
int Is_empty (int top)
{
    if (top == 0)
    {
	return 1;
    }
    else
    {
	return 0;
    }
}

//Function to pop data from stack
int pop (int *Stack, int *top)
{
    //Check stack is empty
    if (Is_empty(*top))
    {
	return STACK_EMPTY;
    }
    else
    {
	//Else,pop data
	(*top)--;
	return Stack[*top];
    }
}
