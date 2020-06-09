#include"stack.h"

//Function to print data's
int peep(Stack *top)
{
    //Checking whether the stack empty or not
    if(top == NULL)
    {
	printf("STACK_EMPTY\n");
    }
    
    //copying stack to temp
    Stack *temp = top;

    //Traversing till end
    while(temp != NULL)
    {
	printf("%d\n", temp -> data);
	//Updating temp to next node
	temp = temp -> link;
    }
return 0;
}

