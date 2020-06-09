#include "search.h"

//Function to binary_seraching using recursion
int binary_recur(int *arr,int low,int high,int val)
{
    //Check condition
    if (low <= high)
    {
	//Make mid value
	int mid = (low + high) / 2;
	//Check value less than mid value
	if (val < arr[mid])
	{
	    //Call function binary_searching
	    return binary_recur(arr,low,mid-1,val);
	}
	//Check value greater than mid value
	else if (val > arr[mid])
	{
	    return binary_recur(arr,mid+1,high,val);
	}
	//Else,
	else
	{
	    //Return index value
	    return mid;
	}
    }
  return DATA_NOT_FOUND;
}
