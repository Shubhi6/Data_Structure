#include "header.h"

//Function to find file names in list
int find_file_name(file_list *head,char *f_name)
{
    file_list *temp = head;

    //Traverse till end
    while(temp)
    {
	//Check file_names
	if (!(strcmp(temp->f_name,f_name)))
	{
	    return FILE_PRESENT;
	}
	//Move links
	temp = temp->link;
    }
    //Else,create node
    return SUCCESS;
}

//Function to create linked link to file names
int create_file_name(file_list **head,char *f_name)
{
    file_list *new = malloc(sizeof(file_list));
    new->f_name = f_name;
    new->link = NULL;
    file_list *temp = *head;
    //Check head is empty or not
    if (*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }
    //call function to find file name is present or not
    if (find_file_name(*head,f_name) == FILE_PRESENT)
    {
	return FILE_FOUND;
    }
    else
    {
	//Else,create link
	while(temp->link)
	{
	    temp = temp->link;
	}
	    temp->link = new;
    }
    return SUCCESS;
}
