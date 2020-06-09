#include "insert_element.h"
//1.0Function for print list
int print_list(slink *head)
{
    //2.0Check wheather head is empty or not
    if(head == NULL)
	return LIST_EMPTY;
    while(head)
    {
	//2.1update and print head->data
	printf("%d->", head->data);
	//2.2update head of link
	head = head->link;
    }
    //3.print new line
    printf("NULL\n");
    return SUCCESS;
}
    
