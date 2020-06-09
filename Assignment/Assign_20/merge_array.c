#include "sort.h"

//Function to merge_array
void merge_array(int *arr,int low,int high)
{
    //Declaring variables
    int i,j,k = 0;
    int temp[high-low+1];
    int mid = (low+high)/2;
    i = low;
    j = mid+1;

    //Loop to sort array elements
    while (i <= mid && j <= high)
    {
	//Check condition to sort
	if (arr[i] < arr[j])
	{
	    temp[k++] = arr[i++];
	}
	else
	{
	    temp[k++] = arr[j++];
	}
    }

    //Loop to store remaining elements
    while (i <= mid)
    {
	temp[k++] = arr[i++];
    }
    //Loop to store remaining elements
    while (j <= high)
    {
	temp[k++] = arr[j++];
    }
    k = 0;

    for (i = low; i <= high; i++)
    {
	arr[i] = temp[k++];
    
    }
}

//Function to Merge_sort
int merge_sort(int *arr,int low,int high)
{
    if (low < high)
    {
	int mid = (low+high)/2;
	//Call function itself recursively
	merge_sort(arr,low,mid);
	merge_sort(arr,mid+1,high);
	//Call function to merge_array
	merge_array(arr,low,high);
	return SUCCESS;
    }
    return FAILURE;
}

