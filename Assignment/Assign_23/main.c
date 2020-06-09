/*
Title : Find_height of tree , Find_number of nodes in binary seach tree
Date : 15/12/19
Author : Sahana 
Description : Input : Read input from user 
              Output : Display on screen
*/
#include "tree.h"

int main()
{
    //Declaring variables
    bstree_t *root = NULL;
    data_t data;
    int option, result;

    while(1)
    {
	//Select operations
	printf("Enter the option:\n 1.Insert_tree\n 2.print_tree\n 3.Find_height\n 4.Find_nodes\n 5.Exit\n option:: ");
	scanf("%d", &option);

	//Switch case
	switch(option)
	{
	    case 1:
		//Read input from user
		printf("Enter the data: ");
		scanf("%d", &data);
		//Call function to insert data to tree
		root = insert_tree(root,data);
		break;
	    case 2:
		//Print tree
		printf("Print_inorder: ");
		print_inorder(root);
		printf("\n");
		printf("Print_preorder: ");
		print_preorder(root);
		printf("\n");
		printf("Print_postorder: ");
		print_postorder(root);
		printf("\n");
		break;
	    case 3:
		//Call function to find_height
		result = find_height(root);
		(result == FAILURE)? printf("Find_height FAILURE\n"): printf("height = %d\n",result);
		break;
	    case 4:
		//Call function to find number of nodes
		result = find_nodes(root);
		(result == FAILURE)? printf("Find_nodes FAILURE\n"): printf("number_of_nodes = %d\n", result);
		break;
	    case 5:
		exit(1);
	}
    }
    return 0;
}

