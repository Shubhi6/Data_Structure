#include "tree.h"

//Function to find_minimum
int find_min(bstree_t *root)
{
    //Check till node becomes NULL
    if (root->left != NULL)
    {
	//Call function recusively
	return find_min(root->left);
    }
    else
    {
	//Return data
	return root->data;
    }
}

//Function to find_maximum
int find_max(bstree_t *root)
{
    if (root->right != NULL)
    {
	//Call function recursively
	return find_max(root->right);
    }
    else
    {
	//Return data
	return root->data;
    }
}

