/*
Title : Find mid, Find_nth_from_list
Date : 15/12/19
Author : Sahana 
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
	//Select operations
	printf("Enter the option:\n 1.Create_array\n 2.Merge_sort\n 3.Print_array\n 4.Exit\n Option:: ");
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
		//Call function to merge_sort
		result = merge_sort(array,low,high);
		(result == SUCCESS)? printf("Merge_sort SUCCESS\n"): printf("Merge_sort FAILURE\n");
		break;
	    case 3:
		print_array(array,size);
		break;
	    case 4:
		exit(1);
		break;
	}
    }
    return 0;
}




