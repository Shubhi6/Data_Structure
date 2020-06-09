#include "sort.h"

//Function to swap_elements
void swap(int *num1, int *num2)
{
    int temp;

    //Swapping values
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

