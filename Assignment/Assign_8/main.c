/*
Title : Reverse_iteration , Reverse_recursive
Date : 20/12/19
Author : Sahana 
Description : Input : Read input from user 
              Output : Display on screen
*/

#include "slist.h"

int main()
{
    //Variables declarations
    SLink *head = NULL;
    int data, result;
    int choice;

    while(1)
    {

	//Prompt the user in choose the option
	printf("Enter the option:\n 1.Insert at Last\n 2.Display list\n 3.Reverse iteration\n 4.Reverse Recursive\n 5.Exit\n Choice :: ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		printf("Enter the element to be inserted at last: ");
		scanf("%d", &data);

		result = insert_at_last(&head, data);
		(result == SUCCESS)? printf("Insert_at_last SUCCESS\n"):printf("Insert_at_last FAILURE\n");

		break;
	    case 2:
		print_list(head);
		break;
	    case 3:
		result = reverse_iterative(&head);
		(result == SUCCESS)? printf("reverse_iteration is SUCCESS\n"):printf("reverse_iteration is FAILURE\n");
		break;
	    case 4:
		reverse_recursive(&head,NULL,head);
		break;
	    case 5:
		exit(1);
		break;
	}
    }

    return 0;
}
