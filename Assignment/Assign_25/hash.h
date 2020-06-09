#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE 1
#define DATA_NOT_FOUND -1
#define DATA_FOUND 2
#define SIZE 5

typedef struct num
{
    int num;
    struct num *link;
}numbers;

//numbers *hash_table[SIZE];

int delete_num(int,numbers **);
int insert_num(int,numbers **);
void create_node(numbers **,int);
int search_num(int,numbers *);
int hash_fun(int);
void print_table(numbers **);

#endif
