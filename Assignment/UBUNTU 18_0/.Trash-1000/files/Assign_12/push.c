#include "stack.h"

//Function to push data
int push(Stack **top, data_t data)
{
    //create a Stack
    Stack *new = malloc(sizeof(Stack));

    //check whether Stack is created or not
    if(new == NULL)
    {
	return FAILURE;
    }

    //Update the data and link
    new -> data = data;

    //If the stack is not empty upadate top with new
    new -> link = *top;
    *top = new;

    return SUCCESS;
}
