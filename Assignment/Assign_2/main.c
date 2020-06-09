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

	while (1)
	{       
                //prompt the user to choose option
		printf("Enter the option:\n1.Display_List\n2.Insert_after\n3.Insert_before\n4.delete_element\n5.Insert_nth\n6.Insert_last\n7.Exit\nchoice:");
		scanf("%d",&choice);

		switch(choice)
		{
			
                        

			case 1:
                                //call the fun to print list
				print_list(head);
				break;
                       
                       
			
                       
                          case 2:
                                //input from user
                                printf("Enter  the given data:");
                                scanf("%d",&g_data);
                                printf("Enter the num to be inserted:");
                                scanf("%d",&n_data);
                                
                                //calling fun for insert after
				result=insert_after(&head,g_data,n_data);
				(result == SUCCESS)?printf("Insert_at_after_SUCCESS"):printf("Insert_at_after_Failure");
				break;
         
                        case 3: 
                                //input from user
                                printf("Enter  the given data:");
                                scanf("%d",&g_data);
                                printf("Enter the num to be inserted:");
                                scanf("%d",&n_data);
                                
                                //calling fun for insert before
				result=insert_before(&head,g_data,n_data);
				(result == SUCCESS)?printf("Insert_at_before_SUCCESS"):printf("Insert_at_before_Failure");
				break;

                          case 4:
                                printf("Enter the element to delete:");
                                scanf("%d",&element);
				result=delete_element(&head,element);
				(result == SUCCESS)?printf("Delete_element_SUCCESS"):printf("Delete_element_Failure");
				break;
                        
                           case 5:
                               
                                printf("Enter the num to be inserted:");
                                scanf("%d",&n_data);
                                printf("Enter the position:");
                                scanf("%d",&position);
				result=insert_nth(&head,  position,  n_data);
                		(result == SUCCESS)?printf("Insert_nth_SUCCESS"):printf("Insert_nths_Failure");
				break;

                        case 6:
                                //prompt the user to enter the element
                                printf("Enter the num to be inserted at last:");
                                scanf("%d",&data);

                                //call fun to insert data
				result=insert_at_last(&head,data);
				(result == SUCCESS)?printf("Insert_at_last_SUCCESS"):printf("Insert_at_Last_Failure");
				break;
                        
                            
                            case 7:
                                exit(1);
                                break;
                        
			default:
				printf("Invalid entry!!");
		}
}
                 
                

	return 0;
}

