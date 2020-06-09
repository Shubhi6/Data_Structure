/*
Title : Insert_at_after, Insert_at_before,Delete_element
Date : 15/12/19
Author : Sahana 
Description : Input : Read input from user 
              Output : Display on screen
*/
#include "dlist.h"

int main()
{
    //Variables declarations
    DLink *head = NULL;
    DLink *tail = NULL;
    int data, result;
    int n_data;
    int choice;
    char option;

    do
    {
	//Prompt the user in choose the option
	printf("Enter the option:\n 1.Insert at Last\n 2.Display list\n 3.Insert_at_after\n 4.Insert_at_before\n 5.Delete element\n Choice :: ");
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
		printf("Enter the g_data:\n");
		scanf("%d", &data);
		printf("Enter the n_data:\n");
		scanf("%d", &n_data);
		result = insert_at_after(data,n_data,&head,&tail);
		(result == SUCCESS)? printf("insert_at_after SUCCESS\n"): printf("insert_at_after FAILURE\n");
		break;
	    case 4:
		printf("Enter the g_data:\n");
		scanf("%d", &data);
		printf("Enter the n_data:\n");
		scanf("%d", &n_data);
		result = insert_at_before(data,n_data,&head,&tail);
		(result == SUCCESS)? printf("insert_at_before SUCCESS\n"): printf("insert_at_before FAILURE\n");
		break;
	    case 5:
		printf("Enter the element to be delete: ");
		scanf("%d", &data);
		result = delete_element(&head,&tail,data);
		(result == SUCCESS)? printf("delete element SUCCESS\n"): printf("delete element FAILURE\n");
		break;

	}

	//Check for continue
	printf("Do you want to continue(y/n):\n");
	scanf("\n%c", &option);

    }while(option == 'y' || option == 'Y');

    return 0;
}
