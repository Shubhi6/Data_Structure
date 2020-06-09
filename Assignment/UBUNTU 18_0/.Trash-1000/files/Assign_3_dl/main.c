/*
Title : Insert_at_last, Insert_at_first,Delete_at_first,Delte_at_last, Delete_list
Date : 15/12/19
Author : Sahana 
Description : Input : Read input from user 
              Output : Display on screen
*/#include "dlist.h"

int main()
{
    //Variables declarations
    DLink *head = NULL;
    DLink *tail = NULL;
    int data, result;
    int choice;
    char option;

    do
    {
	//Prompt the user in choose the option
	printf("Enter the option:\n 1.Insert at Last\n 2.Display list\n 3.Insert at First\n 4.Delete_at_first\n 5.Delete_at_last\n 6.Delete_list\n  Choice :: ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		printf("Enter the element to be inserted at last: ");
		scanf("%d", &data);

		result = insert_at_last(&head, &tail, data);
		(result == SUCCESS)? printf("Insert_at_last SUCCESS\n"):printf("Insert_at_last FAILURE\n");

		break;
	    case 2:
		print_list(head);
		break;
	    case 3:
		printf("Enter the element to be inserted at First: ");
		scanf("%d", &data);
		result = insert_at_first(&head, &tail, data);
		(result == SUCCESS)? printf("insert_at_first SUCCESS\n"): printf("insert_at_first FAILURE\n") ;
		break;
	    case 4:
		result = delete_at_first(&head,&tail);
		(result == SUCCESS)? printf("delete_at_first SUCCESS\n"): printf("delete_at_first FAILURE\n");
		break;
	    case 5:
		result = delete_at_last(&head,&tail);
		(result == SUCCESS)? printf("delete_at_last SUCCESS\n"): printf("delete_at_last FAILURE\n");
		break;
	    case 6:
		result = delete_list(&head,&tail);
		(result == SUCCESS)? printf("delete_list SUCCESS\n"): printf("delete_list FAILURE\n");
		break;
	}

	//Check for continue
	printf("Do you want to continue(y/n):\n");
	scanf("\n%c", &option);

    }while(option == 'y' || option == 'Y');

    return 0;
}
