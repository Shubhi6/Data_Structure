#include <stdio.h>
#include <stdlib.h>

//Macrors
#define SUCCESS 0
#define FAILURE 1
#define DATA_NOT_FOUND 1
#define DATA_FOUND 0

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
int find_min(bstree_t *);
int find_max(bstree_t *);
int search_node(bstree_t *, data_t);
