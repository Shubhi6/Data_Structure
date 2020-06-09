#include "search.h"

//Function to bubble_sort
int bubble_sort (int array[], int size)
{
    int i , j;
    
    //Loop to sort elements
    for (i = 0; i < size; i++)
    {
	for (j = 0; j < size-i-1; j++)
	{
	    if (array[j] > array[j+1])
	    {
		swap(&array[j],&array[j+1]);
	    }
	}
    }
    return SUCCESS;
}


