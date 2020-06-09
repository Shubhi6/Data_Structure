#include "tree.h"

//Function to find_number of nodes
int find_nodes(bstree_t *root)
{
    //Check tree is empty or not
    if (root == NULL)
    {
	return FAILURE;
    }
    //Call function itself recursively
    return 1 + find_nodes(root->left) + find_nodes(root->right);
}
