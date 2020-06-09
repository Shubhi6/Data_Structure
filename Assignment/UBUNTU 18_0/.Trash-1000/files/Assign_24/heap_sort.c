#include "heap.h"

//Function to heap_sort
void heap_sort(int *arr,int size)
{
    int i;
    //Loop to find_max value
    for (i = (size/2) - 1; i >= 0; i--)
    {
	max_heapify(arr,size,i);
    }
    //Loop to swap max and leaf node
    for (i = size - 1; i > 0; i--)
    {
	swap(&arr[0],&arr[i]);
	max_heapify(arr,i,0);
    }
}

//Function to find_max value
void max_heapify(int *arr,int size,int parent)
{
    int left, right, large;
    //Take index value for left and right node
    left = 2*parent + 1;
    right = 2*parent + 2;

    //Take parent value as max value
    large = parent;

    //Check condition to find_max
    if (left < size && arr[left] > arr[large])
    {
	large = left;
    }
    if (right < size && arr[right] > arr[large])
    {
	large = right;
    }
    //Check condition to parent not max_value
    if (large != parent)
    {
	//Call function to swap values
	swap(&arr[large],&arr[parent]);
	//Call function itself recursively
	max_heapify(arr,size,large);
    }
}

//Function to swap values
void swap(int *num1,int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}
