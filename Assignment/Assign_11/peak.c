#include "stack.h"

//Function to print peak data
void peak(int *Stack, int top)
{
    --top;
    printf("peak = %d\n",Stack[top]);
}
