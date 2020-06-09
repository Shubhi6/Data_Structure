#include "queue.h"

//Function to enqueue data
int enqueue(int *queue,int *rear,int size,int val)
{
    //Check q_full or not
    if (Q_full(*rear,size))
    {
	return Q_FULL;
    }
    else
    {
	queue[*rear] = val;
	(*rear)++;
    }
    return SUCCESS;
}

//Function to check q_full or not
int Q_full (int rear,int size)
{
    if (rear == size)
    {
	return 1;
    }
    else
    {
	return 0;
    }
}
