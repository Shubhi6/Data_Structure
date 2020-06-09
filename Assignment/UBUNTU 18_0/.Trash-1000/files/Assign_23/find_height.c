#include "tree.h"

//Function to find_height of tree
int find_height(bstree_t *root)
{
    //Check root present or not
    if (root == NULL)
    {
	return FAILURE;
    }
    else
    {
	//Call function recursively
	int left = find_height(root->left);
	int right = find_height(root->right);
	int result = 0;

	//Compare values
	if (left > right)
	{
	    //Count height
	    result = 1 + left;
	}
	else
	{
	    result = 1 + right;
	}
	//Return height
	return result;
    }

}
