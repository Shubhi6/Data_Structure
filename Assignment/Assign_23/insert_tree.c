#include "tree.h"

//Function to insert data to tree
bstree_t *insert_tree(bstree_t *root,int data)
{
    //Check root present or not
    if (root == NULL)
    {
	//Call function to create node
	return create_node(data);
    }
    else
    {
	//Check condition to insert data to left
	if (root->data > data)
	{
	    //Call function itself recursively
	    root->left = insert_tree(root->left,data);
	}
	//Check condition to insert data to right
	else if (root->data < data)
	{
	    root->right = insert_tree(root->right,data);
	}
	else
	{
	   printf("NOT_POSSIBLE\n");
	}
	return root;	
    }
}

//Function to create node
bstree_t *create_node(int data)
{
    bstree_t *new = malloc(sizeof(bstree_t));
    new->data = data;
    new->left = new->right = NULL;
    //Return address
    return new;
}

