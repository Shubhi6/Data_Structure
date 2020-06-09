#include "insert_element.h"

int main()
{
	//variable declaration
	data_t data;
	int choice;
	slink *head=NULL;

	while(1)
	{
		//prompt the user to enter the choice
		printf("Please select your choice\n1.insert_at_last\n2.insert_at_after\n3.insert_at_before\n4.delete_element\n5.print_list\n6.insert_nth_node\n7.exit\n");
		//read choice
		scanf("%d", &choice);

		switch(choice)
		{
			//function call for insert node
			case 1:
				//prompt the user to enter the data
				printf("Enter the new data\n");

				//read the data
				scanf("%d", &data);

				if((insert_node(&head, data)) == SUCCESS)
				{

					printf("SUCCESSFULLY node is added\n");
				}
				else
					printf("Node is not added\n");
				break;

				//function call for insert at after 
			case 2:
				{
					//variable declaration
					int e_data, n_data;

					//prompt the user to enter the existing data
					printf("Enter the existing data\n");

					//read the existing data
					scanf("%d", &e_data);

					//prompt the user to enter the new data
					printf("Enter the new data\n");

					//read the new data
					scanf("%d", &n_data);

					int status = insert_after(&head, e_data, n_data);

					if(status == SUCCESS)
						printf("node is inserted\n");
					else 
					{
						printf("Memory is not allocated\n");
					}

					break;
				}
				//function call for insert at before
			case 3:
				{
					//variable declaration
					int e_data, n_data; 

					//prompt the user to enter the existing data
					printf("Enter the existing data\n");
					scanf("%d", &e_data);

					//prompt the user to enter the new data
					printf("Enter the new data\n");
					scanf("%d", &n_data);

					int status = insert_at_before(&head, e_data, n_data);

					if(status == SUCCESS)
						printf("node is inserted\n");
					else 
					{
						printf("Memory is not allocated\n");
					}

					break;
				}

				//function for delete element
			case 4:
				//prompt the user to enter the data
				printf("Enter the data\n");

				//read the data
				scanf("%d", &data);

				if((delete_element(&head, data)) == SUCCESS)
					printf("Successfully list is deleted\n");
				else
					printf("LIST_IS_EMPTY\n");
				break;
				//function call for print list
			case 5:
				print_list(head);
				break;
				//function call for insert element at nth position
			case 6:
				{
					//Declaring Local Varibale
					int n_pos, g_data;

					//prompt the user to enter the postion
					printf("Enter the position\n");
					scanf("%d", &n_pos);

					//prompt the user to enter the data
					printf("Enter the data\n");
					scanf("%d", &g_data);
					insert_nth(&head,n_pos, g_data);
					printf("Successfully node is inserted\n");

					break;
				}
				//function call for exit from program
			case 7:
				return 0;
				//function for default value
			default:
				printf("Invalid input\n");
		}

	}
}
