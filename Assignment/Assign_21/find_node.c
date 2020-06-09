#include "tree.h"

//Function to search particular node
int search_node(bstree_t *root,data_t data)
{
    //Check root present or not
    if (root == NULL)
    {
	return DATA_NOT_FOUND;
    }
    //Check condition to search in left
    else if (root->data > data)
    {
	//Call function recursively
	return search_node(root->left,data);
    }
    //Check condition to search in right
    else if (root->data < data)
    {
	return search_node(root->right,data);
    }
    else
    {
	return DATA_FOUND;
    }
}
