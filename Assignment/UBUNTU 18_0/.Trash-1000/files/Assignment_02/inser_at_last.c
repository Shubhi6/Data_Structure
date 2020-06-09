#include "insert_element.h"
//1.function for insert node
int insert_node(slink **head, data_t data)
{
    //2.dynamic memory allocation for new node
    slink *new = (slink *)malloc(sizeof(slink));
    //3.check wheather new is null or not
    if(new == NULL)
    {
	return FAILURE;
    }
    //3.1update the value
    new->data = data;
    new->link = NULL;
    //4.check wheather head is null or not
    if(*head == NULL)
    {
	//4.1Update head value to new
	*head = new;
	return SUCCESS;
    }
	//4.1temporaty variable declaration
	slink *temp = *head;
	//4.2Traverse the node
	while(temp->link != NULL)
	{
	    temp = temp->link;
	    //4.3updating temp->link
	}
	    //4.4updating temp->new
	    temp->link = new;
    return SUCCESS;
}
