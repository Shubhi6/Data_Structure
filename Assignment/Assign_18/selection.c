#include "sort.h"

//Function to selection_sort
int selection (int array[],int size)
{
    //Declaring local variables
    int i, j, min;

    //Loop to sort_array_elements
    for (i = 0; i < size; i++)
    {
	//Assign first value as minimum value
	min = i;
	for (j = i+1; j < size; j++)
	{
	    //Check condition to sort
	    if (array[j] < array[min])
	    {
		min = j;
	    }
	}
	//Call function to swap_elements
	swap(&array[i],&array[min]);
    }
    return SUCCESS;
}
