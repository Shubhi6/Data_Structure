/*

Title : Find mid, Find_nth_from_list
Date : 15/12/19
Author : Sahana 
Description : Input : Read input from user 
              Output : Display on screen
*/
#include "queue.h"

int main()
{
    //Declaring variables
    int queue[SIZE];
    int rear = 0,front = 0;
    int val,option, result;

    while(1)
    {
	//Select options
	printf("Enter the option:\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n Choice:: ");
	scanf("%d", &option);

	//Switch case
	switch(option)
	{
	    case 1:
		printf("Enter the data:\n");
		scanf("%d", &val);
		//Call function to enqueue the data
		result = enqueue(queue,&rear,SIZE,val);
		(result == Q_FULL)?printf("Queue_full\n"):printf("Enqueue SUCCESS\n");
		break;
	    case 2:
		//Call function to dequeue the data
		result = dequeue(queue,&front,rear);
		(result == Q_EMPTY)? printf("Q_Empty\n"):printf("result = %d\n", result);
		break;
	    case 3:
		//Call function to display
		display(queue,front,rear);
		break;
	    case 4:
		exit(1);
		break;
	}
    }
    return 0;
}

