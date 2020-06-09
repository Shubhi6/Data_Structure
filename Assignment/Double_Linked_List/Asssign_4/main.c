/*
Title-:WAP to generate Double linked list .
Author-:Shubhi omar
Date-:15/12/2019
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
		printf("Enter the option:\n1.Insert_last\n2.Insert_after\n3.Display_List\n4.Insert_before\n5.Delete_element\nchoice:");
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
                                printf("Enter  the given data:");
                                scanf("%d",&g_data);
                                printf("Enter the num to be inserted:");
                                scanf("%d",&n_data);
                                
				result=insert_at_after(&head,&tail,g_data,n_data);
				(result == SUCCESS)?printf("Insert_at_after_SUCCESS"):printf("Insert_at_after_Failure");
				break;
case 3:
                                //call the fun to print list
				print_list(head);
				break;
                       
                       
                          
                          case 4: 
                                printf("Enter  the given data:");
                                scanf("%d",&g_data);
                                printf("Enter the num to be inserted:");
                                scanf("%d",&n_data);
                                
				result=insert_before(g_data,n_data,&head,&tail);
				(result == SUCCESS)?printf("Insert_before_SUCCESS"):printf("Insert_before_Failure");
				break;
                           case 5:
                                //prompt the user to enter the element
                                printf("Enter the element to delete:");
                                scanf("%d",&g_data);

                                //call fun to insert data
				result=delete_element(&head,&tail,g_data);
				(result == SUCCESS)?printf("Delete_element_SUCCESS"):printf("Delete_element_Failure");
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

