/*
Title : Quick_sort
Date : 22/12/19
Author : Sahana H S
Description : Input : Read input from user
              Output : Display on screen
	      */
#include "sort.h"

int main()
{
    //Declaring local variables
    int array[SIZE];
    int result, option, size;
    int low,high;

    while(1)
    {
	printf("Enter the option:\n 1.Create_array\n 2.Quick_sort\n 3.Print_array\n 4.Exit\n Option:: ");
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
		low = 0;
		high = size-1;
		//Call function to quick_sort
		result = quick_sort(array,low,high);
		(result == SUCCESS)? printf("Quick_sort SUCCESS\n"): printf("Quick_sort FAILURE\n");
		break;
	    case 3:
		//Call function to print_array
		print_array(array,size);
		break;
	    case 4:
		exit(1);
		break;
	}
    }
    return 0;
}




