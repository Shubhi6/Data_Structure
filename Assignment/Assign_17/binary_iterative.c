#include "search.h"

//Function to binary_searching using iteratively
int binary_iterative(int *arr,int size,int val)
{
    //Declaring local variables
    int low,high,mid;
    low = 0;
    high = size-1;

    while (low <= high)
    {
	//Make mid value
	mid = (low + high) / 2;

	//check value < mid value
	if (val < arr[mid])
	{
	    high = mid-1;
	}
	//Check value > mid value
	else if (val > arr[mid])
	{
	    low = mid+1;
	}
	else
	{
	    //Return Index value
	    return mid;
	}
    }
    return DATA_NOT_FOUND;
}
