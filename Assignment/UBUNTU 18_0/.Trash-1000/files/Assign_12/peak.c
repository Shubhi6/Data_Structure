#include "stack.h"

//Function to print data in peak
int peak(Stack *top)
{
    //Check stack is empty or not
    if(top == NULL)
    {
	return STACK_EMPTY;
    }
    else
    {
	//Else,return data
	return top -> data;
    }
}
