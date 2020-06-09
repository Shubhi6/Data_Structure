#ifndef HEADER_H
#define HEADER_H

//standard headers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//macro
#define SUCCESS 0
#define FAILURE -1
#define DATA_BASE_EMPTY 1
#define FILE_PRESENT FAILURE
#define FILE_FOUND FAILURE
#define WORD_FOUND SUCCESS
#define WORD_NOT_FOUND FAILURE


//UDDF

typedef struct file_name
{
    char *f_name;
    struct file_name *link;
}file_list;

typedef struct file_link
{
	char *file_name;
	int word_count;
	struct file_link *f_link;
}Slist_file_table;

typedef struct word
{
	char *word;
	int file_count;
	struct word *link;
	Slist_file_table *file_table;
}Slist_word;

//fun declarations
int find_file_name(file_list *head,char *f_name);
int create_file_name(file_list **head,char *f_name);
int create_database(Slist_word **head, char*word, char*filename);
int save_database(Slist_word **head,  FILE *fd);
int search_database(Slist_word **head, char *word);
void print_database(Slist_word **);
int update_database(Slist_word **,file_list **);

#endif













