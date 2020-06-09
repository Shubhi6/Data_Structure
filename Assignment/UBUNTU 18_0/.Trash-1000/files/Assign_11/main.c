/*
Title : Write function for push,pop,peak,peep to stack
Date : 15/12/19
Author : Sahana 
Description : Input : Read input from user 
              Output : Display on screen
*/
#include "stack.h"

int main()
{
    //Declaring variables
    int Stack[SIZE];
    int top = 0;
    int data, result;
    int choice;

    while(1)
    {
	//Select options
	printf("Enter the option:\n 1.Push\n 2.Pop\n 3.Peak\n 4.Peep\n 5.Exit\n Choice :: ");
	scanf("%d", &choice);

	//Switch case
	switch(choice)
	{
	    case 1:
		//Read input from user
		printf("Enter the data to push: ");
		scanf("%d", &data);

		//Call function to push data
		result = push(Stack,SIZE,&top,data);
		(result == SUCCESS)? printf("Stack_push SUCCESS\n"):printf("Stack_push FAILURE\n");
		break;
	    case 2:
		//Call function to pop data
		result = pop(Stack,&top);
		(result == STACK_EMPTY)? printf("Stack_Empty\n"):printf("pop_data = %d\n", result);
		break;
	    case 3:
		//Call function print data in peak 
		peak(Stack,top);
		break;
	    case 4:
		//Call function print data's
		peep(Stack,top);
		break;
	    case 5:
		exit(1);
		break;
	}
    }
    return 0;
}


