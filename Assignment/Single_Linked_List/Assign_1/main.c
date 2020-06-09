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
		printf("Enter the option:\n1.Insert_at_last\n2.Display_List\n3.Insert_at_first\n4.Delete_at_first\n5.Delete_at_last\n6.Find_node\n7.Delete_list\n8.Exit\nchoice:");
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
                                //prompt the user to enter element
                                printf("Enter the num to be inserted at first:");
                                scanf("%d",&data);
                                
                                //call fun to insert data at first
				result=insert_at_first(&head,data);
				(result == SUCCESS)?printf("Insert_at_first_SUCCESS"):printf("Insert_at_first_Failure");
				break;
                       
                        case 4:
                                
                                //calling fun for delete
	                	 result=delete_at_first(&head);
				(result == SUCCESS)?printf("Delete_at_first_SUCCESS"):printf("Delete_at_first_Failure");
				break;
                         
                        case 5: 
                                 //calling fun for delete at last
                                 result=delete_at_last(&head);
                                (result == SUCCESS)?printf("Delete_at_last_SUCCESS"):printf("Delete_at_last_Failure");
                                break;
                        
                        case 6:
                                //input from user
                                printf("Enter the num to find:");
                                scanf("%d",&element);

				result=find_node(data,head);
				(result == DATA_NOT_FOUND)?printf("Find_node_FAILURE"):printf("Find_node in %d position",result);
				break;

                          case 7:
                                 //calling fun for delete list
                                 result=delete_list(&head);
                                (result == SUCCESS)?printf("Delete_list_SUCCESS"):printf("Delete_list_Failure");
                                break;
                           
                         case 8:
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

