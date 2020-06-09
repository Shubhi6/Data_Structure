#include "heap.h"

int main()
{
    //Decalring variables
    int size, i, option;
    int arr[SIZE];

    while(1)
    {
	printf("Enter the option:\n 1.Create_array\n 2.Heap_sort\n 3.Print_array\n 4.Exit\n option:: ");
	scanf("%d", &option);

	switch(option)
	{
	    case 1:
		//Read input from user
		printf ("Enter the size: ");
		scanf("%d", &size);
	
		printf("Enter the elements:\n");
		for (i = 0; i < size; i++)
		{
		    scanf("%d", &arr[i]);
		}
		break;
	    case 2:
		//Call function to heap_sorting
		heap_sort(arr,size);
		break;
	    case 3:;
		//Loop to print elements
		for (i = 0; i < size; i++)
		{
		    printf("[%d] = %d\n", i,arr[i]);
		}
		break;
	    case 4:
		exit(1);
	}
    }
    return 0;
}
