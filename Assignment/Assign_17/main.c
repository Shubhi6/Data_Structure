/*
Title : Binary_searching using iteratively and recursively
Date : 22/12/19
Author : Sahana H S
Description : Input : Read input from user
              Output : Display on screen
	      */
#include "search.h"

int main()
{
    //Declaring local variables
    int array[SIZE];
    int result, option, size;
    int data,low,high;

    while(1)
    {
	//Select opeartions
	printf("Enter the option:\n 1.Create_array\n 2.Bubble_sort\n 3.Binary_iterative\n 4.Binary_recursive\n 5.Print_array\n 6.Exit\n Option:: ");
	scanf("%d", &option);

	//Switch case
	switch(option)
	{
	    case 1:
		//Read input from user
		printf("Enter the array size: ");
		scanf("%d", &size);

		printf("Enter the elements of array:\n");

		for (int count = 0; count < size; count++)
		{
		    scanf("%d", &array[count]);
		}
		break;
	    case 2:
		//Call function to sort
		result = bubble_sort(array,size);
		(result == SUCCESS)? printf("Bubble_sort SUCCESS\n"): printf("Bubble_sort FAILURE\n");
		break;
	    case 3:
		printf("Enter the data to search: ");
		scanf("%d", &data);
		//Call function to serach data using iterative
		result = binary_iterative(array,size,data);
		(result == DATA_NOT_FOUND)? printf("DATA_NOT_FOUND\n"): printf("data %d is at position %d\n", data, result);
		break;
	    case 4:
		printf("Enter the data to serach: ");
		scanf("%d", &data);
		low = 0;
		high = size-1;
		//Call function to search data using recursive
		result = binary_recur(array,low,high,data);
		(result == DATA_NOT_FOUND)? printf("DATA_NOT_FOUND\n"): printf("data %d is at position %d\n", data, result);
		break;
	    case 5:
		print_array(array,size);
		break;
	    case 6:
		exit(1);
		break;
	}
    }
    return 0;
}




