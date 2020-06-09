#include "sort.h"

//Function to quick_sort
int quick_sort(int *arr,int low,int high)
{
    if (low < high)
    {
	//Call function to partition of array_elements
	int split = partition(arr,low,high);
	//Call function itself recursivley
	quick_sort(arr,low,split-1);
	quick_sort(arr,split+1,high);
	return SUCCESS;
    }
    return FAILURE;
}

//Function to partition of array_elements
int partition(int *arr,int low,int high)
{
    //Declaring variables
    int left,right,pivot;
    left = low;
    right = left+1;
    pivot = arr[low];

    while (right <= high)
    {
	//Check condition to sort
	if (arr[right] < pivot)
	{
	    left++;
	    if (left != right)
	    {
		swap(&arr[left],&arr[right]);
	    }
	}
	right++;
    }
    //Call function to swap 
    swap(&arr[low],&arr[left]);
    return left;
}
