#include "sort.h"

//Function to print_array_elements
void print_array(int array[],int size)
{
    for (int count = 0; count < size; count++)
    {
	printf("[%d] = %d\n", count, array[count]);
    }
}
