#include "queue.h"

//Function to print_elements
void display(int *queue,int front,int rear)
{
    int i;
    //Check queue_empty or not
    if (front == rear)
    {
	printf("Q_EMPTY\n");
    }
    //Loop to print_elements
    for (i = front; i < rear; i++)
    {
	printf("%d<--", queue[i]);
    }
    printf("\n");
}
