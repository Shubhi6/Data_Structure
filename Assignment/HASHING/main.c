/*
Title-:WAP to generate HASH_TABLE .
Author-:Shubhi omar
Date-:06/01/2020
Description-:Input-: Read a choice and number.
             Output-:Operation in hash table.

*/
#include"hash.h"
int main()
{       
        //declaration variable
	
	int choice;
        
	char option;

	do
	{       
                //prompt the user to choose option
		printf("Enter the option:\n1.Insert_Hash_table\n2.Display_Hash_table\n3.Search\n4.Delete\n5.Exit\nchoice:");
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

