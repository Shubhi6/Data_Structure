/*
Title : Bubble_sort,INsertion_sort,Selection_sort
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

    while(1)
    {
	//Ask for operations
	printf("Enter the option:\n 1.Create_array\n 2.Bubble_sort\n 3.Insertion_sort\n 4.Selection_sort\n 5.Print_array\n 6.Exit\n Option:: ");
	scanf("%d", &option);

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
		//Call function to bubble_sort
		result = bubble_sort(array,size);
		(result == SUCCESS)? printf("Bubble_sort SUCCESS\n"): printf("Bubble_sort FAILURE\n");
		break;
	    case 3:
		//Call function to insertion sort
		result = insertion(array,size);
		(result == SUCCESS)? printf("Insertion_sort SUCCESS\n"): printf("Insertion_sort FAILURE\n");
		break;
	    case 4:
		//Call function to selection_sort
		result = selection(array,size);
		(result == SUCCESS)? printf("Selection_sort SUCCESS\n"): printf("Selection_sort FAILURE\n");
		break;
	    case 5:
		//Call function print_array
		print_array(array,size);
		break;
	    case 6:
		exit(1);
		break;
	}
    }
    return 0;
}




