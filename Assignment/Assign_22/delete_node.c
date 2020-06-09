#include "tree.h"

//Function to delete a node
bstree_t *delete_node(bstree_t *root, int data)
{
    //searching for the node to be deleted
    if (root == NULL)
    {
        return FAILURE;
    }
    if (data > root->data)
    {
	//Call function itself recursively
        root->right = delete_node(root->right, data);
    }
    else if (data < root->data)
    {
        root->left = delete_node(root->left, data);
    }
    else
    {
        //No Children
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        //One Child
        else if(root->left == NULL || root->right == NULL)
        {
            bstree_t *temp;
            if(root->left == NULL)
	    {
                temp = root->right;
	    }
            else
	    {
                temp = root->left;
	    }
            free(root);
            return temp;
        }

        //Two Children
        else
        {
            bstree_t *temp = find_min(root->right);
            root->data = temp->data;
            root->right = delete_node(root->right, temp->data);
        }
    }
    return root;
}
//Function to find_min
bstree_t *find_min(bstree_t *root)
{
    if (root->left != NULL)
    {
	return find_min(root->left);
    }
    else
    {
	return root;
    }
}

