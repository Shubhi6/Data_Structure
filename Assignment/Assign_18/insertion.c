#include "sort.h"

//Function to insertion_sort
int insertion(int array[],int size)
{
    //Decalring local variables
    int i, j, temp;

    //Loop to sort_elements
    for (i = 1; i < size; i++)
    {
	temp = array[i];
	j = i - 1;

	//Check condition to sort
	while (j >= 0 && array[j] > temp)
	{
	    array[j+1] = array[j];
	    j--;
	}
	array[j+1] = temp;
    }
    return SUCCESS;
}
