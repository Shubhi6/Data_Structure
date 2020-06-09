/*
Title-:WAP to generate Double linked list .
Author-:Shubhi omar
Date-:14/12/2019
Description-:Input-: Read a choice and number.
             Output-:Print Double Linked List.

*/
#include"dlist.h"

int main()
{       
        //declaration variable
	DLink *head =NULL;
        DLink *tail=NULL;
	int data,result;
        
        int n_data,g_data;
	int choice;
	char option;

	do
	{       
                //prompt the user to choose option
		printf("Enter the option:\n1.Insert_at_last\n2.Display_List\n3.Insert_at_first\n4.Delete_list\n5.Delete_at_first\n6.Delete_last\n7.Exit\nchoice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
                                //prompt the user to enter the element
                                printf("Enter the num to be inserted at last:");
                                scanf("%d",&data);

                                //call fun to insert data
				result=insert_at_last(&head,&tail,data);
				(result == SUCCESS)?printf("Insert_at_last_SUCCESS"):printf("Insert_at_Last_Failure");
				break;
                        

			case 2:
                                //call the fun to print list
				print_list(head);
				break;
                       
                       
			case 3:
                                //take input from user
                                printf("Enter the num to be inserted at first:");
                                scanf("%d",&data);
                                
                                //call fun to insert at first
				result=insert_at_first(&head,&tail,data);
				(result == SUCCESS)?printf("Insert_at_first_SUCCESS"):printf("Insert_at_first_Failure");
				break;

                        
                         case 4:
                                //call fun to delete list
                                result=delete_list(&head);
				(result == SUCCESS)?printf("Delete_list_SUCCESS"):printf("Delete_list_Failure");
				break;

                         case 5:
                                //call fun to delete first
				result=delete_first(&head,&tail);
				(result == SUCCESS)?printf("Delete_first_SUCCESS"):printf("Delete_First_Failure");
				break;

                          case 6:
                                //call fun to delete last
				result=delete_last(&head,&tail);
				(result == SUCCESS)?printf("Delete_last_SUCCESS"):printf("Delete_last_Failure");
				break;

                          case 7:
                                exit(1);
                                break;
                        
			default:
				printf("Invalid entry!!");
		}
                 
                //check for continue
		printf("DO you want to continue(y/n):");
		scanf("\n%c",&option);
	}while(option == 'y' ||option == 'Y');

	return 0;
}

