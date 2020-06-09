#include <stdio.h>
#include <stdlib.h>

//Macros
#define FAILURE 0
#define DATA_NOT_FOUND 1

//UDDF
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
int find_height(bstree_t *);
int find_nodes(bstree_t *);

