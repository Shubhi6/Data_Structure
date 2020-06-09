/*
Title : sl_sort
Date : 15/12/19
Author : Sahana 
Description : Input : Read input from user 
              Output : Display on screen
*/

#include "slist.h"

int main()
{
    //Variables declarations
    SLink *head = NULL;
    SLink *head1 = NULL;
    int data, result;
    int choice;

    while(1)
    {
	//Prompt the user in choose the option
	printf("Enter the option:\n 1.Insert at last\n 2.sl_sort\n 3.Display list\n 4.Exit\n Choice :: ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		printf("Enter the element to be insert at last: ");
		scanf("%d", &data);
		result = insert_at_last(&head,data);
		(result == SUCCESS)? printf("insert at last SUCCESS\n"):printf("insert at last FAILURE\n");
		break;
	    case 2:
		result = sl_sort(&head,&head1);
		(result == SUCCESS)? printf("Sorting SUCCESS\n"):printf("Sorting FAILURE\n");

		break;
	    case 3:
		print_list(head);
		break;
	    case 4:
		exit(1);
		break;
	}
    }

    return 0;
}
