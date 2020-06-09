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
    qlist *rear = NULL,*front = NULL;
    data_t val;
    int result,option;

    while(1)
    {
	//Select options
	printf("Enter the option:\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n Choice:: ");
	scanf("%d", &option);

	//Switch case
	switch(option)
	{
	    case 1:
		//Read inpu from user
		printf("Enter the data:\n");
		scanf("%d", &val);
		//Call function to enqueue the data
		result = enqueue(&rear,&front,val);
		(result == SUCCESS)? printf("Enqueue SUCCESS\n"): printf("Queue_Full\n");
		break;
	    case 2:
		//Call function to dequeue the data
		result = dequeue(&front,&rear,val);
		(result == Q_EMPTY)? printf("Queue_Empty\n"): printf("Dequeue SUCCESS\n");
		break;
	    case 3:
		//Call function to display data
		display(front);
		break;
	    case 4:
		exit(1);
		break;
	}
    }
    return 0;
}

