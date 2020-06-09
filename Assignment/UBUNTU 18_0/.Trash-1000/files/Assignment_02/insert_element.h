#ifndef SLINK_H
#define SLINK_H
 
#include<stdio.h>
#include<stdlib.h>
//define macros
#define SUCCESS 0
#define FAILURE 1
#define LIST_EMPTY 2
#define DATA_NOT_PRESENT 3
#define DATA_PRESENT 4
//renaming the data types
typedef int data_t;
typedef struct node
{
    data_t data;
    struct node *link;
}slink;
//Function prototype for insert node
int insert_node(slink **head, data_t data);
//Function prototype for insert element after
int insert_after(slink **head, data_t e_data, data_t n_data);
//function prototype for insert element at before
int insert_at_before(slink **head, data_t e_data, data_t n_data);
//Function prototype for delete element
int delete_element(slink **head, data_t  g_data);
//Function prototype for print list
int print_list(slink *head);
//Function prototype for insert nth data
int insert_nth(slink **head,data_t n_pos, data_t g_data);

#endif
