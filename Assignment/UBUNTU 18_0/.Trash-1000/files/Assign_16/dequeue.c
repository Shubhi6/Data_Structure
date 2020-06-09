#include "queue.h"

int dequeue(qlist **front,qlist **rear,data_t data)
{
    qlist *temp;
    temp = *front;
//    data_t data = (temp)->data;

    //Check queue is empty or not
    if ((*rear) == NULL && (*front) == NULL)
    {
	return Q_EMPTY;
    }

    //Check whether queue contains only one data
    if ((*front) -> link == NULL)
    {
	free(*front);
	*front = *rear = NULL;
	return SUCCESS;
    }
    //Else,queue contains multiple data
    (*front) = ((*front) -> link);
    free(temp);
    return SUCCESS;
}


