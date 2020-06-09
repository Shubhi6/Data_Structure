#include "stack.h"

//Function to print all data in stack
void peep (int *Stack, int top)
{
    int i;
    --top;

    printf("peep:\n");
    //Loop to print
    for (i = top; i >= 0; i--)
    {
	printf("%d\n", Stack[i]);
    }
}


