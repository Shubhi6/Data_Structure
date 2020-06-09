#include "queue.h"

//Function to dequeue data
int dequeue(int *queue,int *front,int rear)
{
    //Check queue empty or not
    if (Q_empty(rear,*front))
    {
	return Q_EMPTY;
    }
    else
    {
	return queue[(*front)++];
    }
}
//Function to check q_empty or not
int Q_empty(int rear,int front)
{
    if (front == rear)
    {
	return 1;

    }
    else
    {
	return 0;
    }
}
