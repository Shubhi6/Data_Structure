/*
Title : Find_min_max , search_node in binary search tree
Date : 27/12/19
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
	printf("Enter the option:\n 1.Insert_tree\n 2.print_tree\n 3.Find_min_max\n 4.Search_node\n 5.Exit\n option:: ");
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
		//Call function to find_min_max
		result = find_min(root);
		printf("Minimum = %d\n", result);
		result = find_max(root);
		printf("Maximum = %d\n", result);
		break;
	    case 4:
		printf("Enter the data to search: ");
		scanf("%d", &data);
		//Call function to search node
		result = search_node(root,data);
		(result == DATA_NOT_FOUND)? printf("DATA_NOT_FOUND in binary search tree\n"): printf("DATA_FOUND in binary search tree\n");
		break;
	    case 5:
		exit(1);
	}
    }
    return 0;
}

