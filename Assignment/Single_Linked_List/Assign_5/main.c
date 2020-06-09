/*
Title-:WAP to generate Single linked list .
Author-:Shubhi omar
Date-:20/12/2019
Description-:Input-: Read a choice and number.
             Output-:Print Single Linked List.

*/
#include"slist.h"
int main()
{       
	//declaration variable
	SLink *head =NULL;
	int data,result;
	int choice;
	int position;
	char option;

	do
	{       
		//prompt the user to choose option
		printf("Enter the option:\n1.Display_List\n2.Insert_last\n3.Find_mid\n4.get_nth_last\n5.Exit\nchoice:");
		scanf("%d",&choice);

		switch(choice)
		{

                        case 1:
				//call the fun to print list
				print_list(head);
				break;

			case 2:
				//prompt the user to enter the element
				printf("Enter the num to be inserted at last:");
				scanf("%d",&data);

				//call fun to insert data
				result=insert_at_last(&head,data);
				(result == SUCCESS)?printf("Insert_at_last_SUCCESS"):printf("Insert_at_Last_Failure");
				break;
			case 3:
				//input from user


				result=find_mid(head);
				(result == SUCCESS)?printf("Find_mid_SUCCESS"):printf("Find_node FAilure");
				break;
			case 4:
				//prompt the user to enter the element
				printf("Enter the position from last which u want:");
				scanf("%d",&position);

				//call fun to insert data
				result=get_nth(head,position);
				(result == FAILURE)?printf("get_nth_FAILURE"):printf("get_nth_value is %d\n",result);
				break;


			case 5:
                                //exit function
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

