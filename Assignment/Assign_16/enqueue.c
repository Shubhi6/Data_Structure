#include "queue.h"

int enqueue (qlist **rear,qlist **front, data_t data)
{
    //Create new queue
    qlist *new = malloc(sizeof(qlist));

    //Check queue is created or not
    if (new == NULL)
    {
	return FAILURE;
    }

    //Update the data and link
    new -> data = data;
    new -> link = NULL;

    //Check whether, the queue is empty
    if (*rear == NULL && *front == NULL)
    {
	//Update rear and front
	*rear = *front = new;
	return SUCCESS;
    }

    //Establish links between last - new data and update till
    (*rear) -> link = new;
    *rear = new;
    return SUCCESS;
}
