#include "slist.h"

int find_loop(SLink *head)
{
    //Check list empty or not
    if (head == NULL)
    {
	return LIST_EMPTY;
    }

    //Intialise two pointers
    SLink *ptr1 = head, *ptr2 = head;
    //Traverse till end
    while (ptr2 != NULL && ptr1 != NULL && ptr1->link)
    {
	//Move one node
	ptr2 = ptr2 -> link;
	//Move two nodes
	ptr1 = ptr1 -> link->link;
	//Check loop detected or not
	if (ptr2 == ptr1)
	{
	    return LOOP_DETECTED;
	}
    }
    return LOOP_NOT_DETECTED;
}
