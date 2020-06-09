#include"header.h"

int create_database(Slist_word **head, char *word, char *filename)
{
	//variable declaration
	int  i = 0;
	Slist_word *ptr = *head;


	printf("file name is %s\n",filename);
	//If address at head of "head_index" is NULL then creating a new node
	if(*head == NULL)
	{

		//printf("creating new\n");
		Slist_word *new = (Slist_word *)malloc(sizeof(Slist_word));
		new->file_count = 1;
		//for assigning word
		new->word=malloc(32);
		strcpy(new->word, word);
		printf("word = %s\n", word);
		//for assigning file table
		Slist_file_table *new_table = malloc(sizeof(Slist_file_table));
		new_table->word_count = 1;
		new_table->file_name=malloc(32);
		strcpy(new_table->file_name, filename);

		//for assigning file link
		new_table->f_link = NULL;
		new->file_table = new_table;
		new->link = NULL;
		*head = new;

		//printf("head word = %s\n", (*head)->word);
		return SUCCESS;

	}
	//Traverse till end
	while(ptr)
	{
		//Check words are same
		if(strcmp(ptr->word,word) == 0)
		{
			Slist_file_table *temp1 = ptr->file_table;
			printf("%s\n",word);
			while(temp1)
			{
				//Check files are same
				if (!strcmp(temp1->file_name,filename))
				{
					//Increement word_count
					(temp1->word_count)++;
					return SUCCESS;
				}
				//Else,Check file link null or not
				if (temp1->f_link == NULL)
				{
					//Increment file_count
					(ptr->file_count)++;
					//Allocate memory for other file
					Slist_file_table *new = malloc(sizeof(Slist_file_table));
					new->file_name = malloc(32);
					strcpy(new->file_name,filename);
					new->word_count = 1;
					temp1->f_link = new;
					new->f_link = NULL;
					return SUCCESS;
				}
				//Move next file link
				temp1 = temp1->f_link;
			}
		}
		printf("%s\n",word);
		//Else,Check word link null or not
		if (ptr->link == NULL)
		{
			//Allocate memory for another words
			Slist_word *new = malloc(sizeof(Slist_word));
			new->word = malloc(32);
			strcpy(new->word,word);
			printf("%s\n",new->word);
			new->file_count = 1;
			new->link = NULL;
			new->file_table = malloc(sizeof(Slist_file_table));
			new->file_table->file_name = malloc(32);
			strcpy(new->file_table->file_name,filename);
			printf("%s\n",new->file_table->file_name);
			new->file_table->word_count = 1;
			new->file_table->f_link = NULL;
			ptr->link = new;

			return SUCCESS;
		}
		//Move word link
		ptr = ptr->link;
	}
	return SUCCESS;
}



