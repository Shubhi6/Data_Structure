/*
Title : Delete_node in binary search tree
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
    int option;

    while(1)
    {
	//Select operations
	printf("Enter the option:\n 1.Insert_tree\n 2.print_tree\n 3.Delete_node\n 4.Exit\n option:: ");
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
		printf("Enter the data to delete:\n");
		scanf("%d", &data);
		//Call function to delete_node
		root = delete_node(root,data);
		break;
	    case 4:
		exit(1);
	}
    }
    return 0;
}

