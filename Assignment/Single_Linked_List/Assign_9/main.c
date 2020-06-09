/*
Title-:WAP to generate Single linked list .
Author-:Shubhi omar
Date-:18/12/2019
Description-:Input-: Read a choice and number.
             Output-:Print Single Linked List.

*/
#include"slist.h"
int main()
{       
        //declaration variable
	SLink *head =NULL;
	int data,result;
        int g_data,n_data;
        int element;
	int choice;
        int position;
	char option;

	do
	{       
                //prompt the user to choose option
		printf("Enter the option:\n1.Insert_at_last\n2.Display_List\n3.remove_duplictes\n4.Exit\nchoice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
                                //prompt the user to enter the element
                                printf("Enter the num to be inserted at last:");
                                scanf("%d",&data);

                                //call fun to insert data
				result=insert_at_last(&head,data);
				(result == SUCCESS)?printf("Insert_at_last_SUCCESS"):printf("Insert_at_Last_Failure");
				break;
                        

			case 2:
                                //call the fun to print list
				print_list(head);
				break;
                       
                       
			case 3:
                               //call fun to insert data
				result=remove_duplicates(head);
				(result == SUCCESS)?printf("Remove_duplicates_SUCCESS"):printf("Insert_at_Last_Failure");
				break;
                        

                        
                         case 4:
                                //call the fun to print list
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

