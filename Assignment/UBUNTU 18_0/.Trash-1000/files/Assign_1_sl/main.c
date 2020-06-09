/*
Title : Insert_at_first, Insert_at_last,Delete_at_first, Delete_at_last, Deelte_list, find_node
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
    int data, result, position;
    int choice;
    char option;

    do
    {
	//Prompt the user in choose the option
	printf("Enter the option:\n 1.Insert at Last\n 2.Display list\n 3.Insert at First\n 4.Delete at First\n 5.Delete at Last\n 6.Delete list\n 7.Find node\n Choice :: ");
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
		printf("Enter the element to be inserted at First: ");
		scanf("%d", &data);
		result = insert_at_first(&head, data);
		(result == SUCCESS)? printf("insert_at_first SUCCESS\n"): printf("insert_at_first FAILURE\n") ;
		break;
	    case 4:
		result = delete_at_first(&head);
		(result == SUCCESS)? printf("delete_at_first SUCCESS\n"):printf("delete_at_first FAILURE\n");
		break;
	    case 5:
		result = delete_at_last(&head);
		(result == SUCCESS)?  printf("delete_at_last SUCCESS\n"):printf("delete_at_last FAILURE\n"); 
		break;
	    case 6:
		result = delete_list(&head);
		(result == SUCCESS)? printf("delete_list SUCCESS\n"):printf("delete_list FAILURE\n");
	        break;
	    case 7:
	        printf("Enter the element to be find\n");
		scanf("%d", &data);
		result = find_node(data,head);
		(result == DATA_NOT_FOUND)? printf("Data is not found\n"): printf("%d\n", result);
		break;
	        	
	}

	//Check for continue
	printf("Do you want to continue(y/n):\n");
	scanf("\n%c", &option);

    }while(option == 'y' || option == 'Y');

    return 0;
}
