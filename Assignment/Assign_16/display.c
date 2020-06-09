#include "queue.h"

void display(qlist *front)
{
    //Check queue is empty or not
    if (front == NULL)
    {
	printf("Q_EMPTY\n");
    }

    qlist *temp = front;

    //Loop to print data's
    while (temp != NULL)
    {
	printf("%d->", temp->data);
	temp = temp->link;
    }
    printf("NULL\n");
}
