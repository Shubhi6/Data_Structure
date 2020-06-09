#include "sort.h"

//Function to bubble_sort 
int bubble_sort (int array[], int size)
{
    //Declaring local variables
    int i , j;
    
    //Loop to sort array_elements
    for (i = 0; i < size; i++)
    {
	for (j = 0; j < size-i-1; j++)
	{
	    //Check condition to sort elements
	    if (array[j] > array[j+1])
	    {
		//Call function to swap elements
		swap(&array[j],&array[j+1]);
	    }
	}
    }
    return SUCCESS;
}


