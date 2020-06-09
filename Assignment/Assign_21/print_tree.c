#include "tree.h"

//Functions to print tree in order
void print_inorder(bstree_t *root)
{
    if (root != NULL)
    {
	//Call function to itself recursively
	print_inorder(root->left);
	printf("%d->",root->data);
	print_inorder(root->right);
    }
}
//Function to print tree in pre-order
void print_preorder(bstree_t *root)
{
    if (root != NULL)
    {
	printf("%d->",root->data);
	print_preorder(root->left);
	print_preorder(root->right);
    }
}
//Function to print tree in post-order
void print_postorder(bstree_t *root)
{
    if (root != NULL)
    {
	print_postorder(root->left);
	print_postorder(root->right);
	printf("%d->",root->data);

    }
}
