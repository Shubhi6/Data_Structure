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
    SLink *head2 = NULL;
    int data, result;
    int choice;

    while(1)
    {
	//Prompt the user in choose the option
	printf("Enter the option:\n 1.Insert for head1\n 2.Insert for head2\n 3.sort_merge\n 4.Display list\n 5.Exit\n Choice :: ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		printf("Enter the data to be insert for head1: ");
		scanf("%d", &data);
		result = insert_sorted(&head1,data);
		(result == SUCCESS)?printf("Insert SUCCESS\n"):printf("Insert FAILURE\n");
		//print_list(head1);
		break;
	    case 2:
		printf("Enter the data to be insert for head2: ");
		scanf("%d", &data);
		result = insert_sorted(&head2,data);
		(result == SUCCESS)?printf("Insert SUCCESS\n"):printf("Insert FAILURE\n");
		//print_list(head2);
		break;
	    case 3:
		result = sorted_merge(&head,&head1,&head2);
		(result == SUCCESS)?printf("Sorted_merge SUCCESS\n"):printf("Sorted_merge FAILURE\n");
                head1 = NULL;
		head2 = NULL;
		break;
	    case 4:
		print_list(head1);
		print_list(head2);
		print_list(head);
		break;
	    case 5:
		exit(1);
		break;
	}
    }

    return 0;
}
