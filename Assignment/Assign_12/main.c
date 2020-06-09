/*
Title : Perform operations on push,pop,peak,peep in stack usng linked list
Date : 15/12/19
Author : Shubhi omar
Description : Input : Read input from user 
              Output : Display on screen
*/
#include "stack.h"

int main()
{
    
    Stack *top = NULL;
    int data, result;
    int choice;

    while(1)
    {
	//Select options
	printf("Enter the option:\n 1.Push\n 2.Pop\n 3.Peak\n 4.Peep\n 5.Exit\n Choice :: ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		//Read input from user
		printf("Enter the data to push: ");
		scanf("%d", &data);

		//Call function to push data
		result = push(&top,data);
		(result == SUCCESS)? printf("Stack_push SUCCESS\n"):printf("Stack_push FAILURE\n");
		break;
	    case 2:
		//Call function to pop data
		result = pop(&top);
		(result == STACK_EMPTY)? printf("Stack_Empty\n"):printf("Stack_pop SUCCESS\n");
		break;
	    case 3:
		//Call function to print data in peak
		result = peak(top);
		(result == STACK_EMPTY)? printf("Stack_empty\n"):printf("peak_data = %d\n", result);
		break;
	    case 4:
		//Call function to print all data's
		result = peep(top);
		if (result == STACK_EMPTY)
		{
		    printf("Stack_empty\n");
		}
		break;
	    case 5:
		exit(1);
		break;
	}
    }
    return 0;
}
