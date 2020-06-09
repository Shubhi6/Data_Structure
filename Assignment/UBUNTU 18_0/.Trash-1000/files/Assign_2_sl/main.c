/*
Title : Insert_at_after, Insert_at_before,Delete_element,Insert_Nth position
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
    int g_data, n_data, data, result, position;
    int choice;

    while(1)
    {
	//Prompt the user in choose the option
	printf("Enter the option:\n 1.Insert at last\n 2.Insert at After\n 3.Display list\n 4.Insert at Before\n 5.Delete element\n 6.Insert Nth position\n 7.Exit\n Choice :: ");
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
		printf("Enter the g_data: ");
		scanf("%d", &g_data);
		printf("Enter the n_data: ");
		scanf("%d", &n_data);

		result = insert_at_after(&head, g_data, n_data);
		(result == SUCCESS)? printf("Insert_at_after SUCCESS\n"):printf("Insert_at_after FAILURE\n");

		break;
	    case 3:
		print_list(head);
		break;
	    case 4:
		printf("Enter the g_data: ");
		scanf("%d", &g_data);
		printf("Enter the n_data: ");
		scanf("%d", &n_data);

		result = insert_at_before(&head, g_data, n_data);
		(result == SUCCESS)? printf("insert_at_before SUCCESS\n"): printf("insert_at_before FAILURE\n") ;
		break;
	    case 5:
		printf("Enter the element to be delete\n");
		scanf("%d", &data);
		result = delete_element(&head,data);
		(result == SUCCESS)? printf("delete element SUCCESS\n"): printf("delete element FAILURE\n");
		break;
	    case 6:
		printf("Enter the element to be insert:\n");
		scanf("%d", &data);
		printf("Enter the position to be insert\n");
		scanf("%d", &position);
		result = insert_Nth(&head,position,data);
		(result == SUCCESS)? printf("insert Nth position SUCCESS\n"): printf("insert Nth position FAILURE\n");
		break;
	    case 7:
		exit(1);
		break;
	}
    }

    return 0;
}
