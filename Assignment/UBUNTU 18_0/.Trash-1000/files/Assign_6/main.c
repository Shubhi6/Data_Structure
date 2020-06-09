/*
Title : Insert_sorted , Find_loop
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
    int data, result, n;
    int choice;

    while(1)
    {

	//Prompt the user in choose the option
	printf("Enter the option:\n 1.Insert at Last\n 2.Display list\n 3.Create loop\n 4.Find loop\n 5.Insert sorted\n 6.Exit\n Choice :: ");
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
		printf("Enter the element to be create loop: ");
		scanf("%d", &data);
		result = create_loop(&head,data);
		(result == SUCCESS)? printf("Create loop SUCCESS\n"):printf("Create loop FAILURE\n");
		break;
	    case 4:
		result = find_loop(head);
		(result == LOOP_DETECTED)? printf("find_loop SUCCESS\n"):printf("find_loop FAILURE\n");
		break;
	    case 5:
		printf("Enter the element to be insert: ");
		scanf("%d", &data);
		result = insert_sorted(&head,data);
		(result == SUCCESS)? printf("inserted in sorted SUCCESS\n"):printf("inserted in sorted FAILURE\n");
		break;
	    case 6:
		exit(1);
		break;
	}
    }

    return 0;
}
