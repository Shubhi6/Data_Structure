#include "stack.h"

int pop(Stack **top)
{
    //Checking whether the stcak is empty is or not
    if(*top == NULL)
    {
	return STACK_EMPTY;
    }

    //Copying top to temp
    Stack *temp = *top;

    //Updating top with new link 
    *top = (*top) -> link;

    //Deleting temp
    free(temp);

    return SUCCESS;
}
