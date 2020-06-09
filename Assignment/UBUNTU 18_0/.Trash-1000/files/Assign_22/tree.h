#include <stdio.h>
#include <stdlib.h>

//Macro
#define FAILURE NULL

//UDF
typedef int data_t;
typedef struct tree
{
    data_t data;
    struct tree *left, *right;
}bstree_t;

//Function declarations
bstree_t *insert_tree(bstree_t *,data_t);
void print_inorder(bstree_t *);
void print_preorder(bstree_t *);
void print_postorder(bstree_t *);
bstree_t *create_node(data_t);
bstree_t *find_min(bstree_t *);
bstree_t *delete_node(bstree_t *,data_t);
