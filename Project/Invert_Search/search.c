#include"header.h"
int search_database(Slist_word **head, char *word)
{
        //declaration of variable
	int head_index = 0;

        //index declaration
	if((word[0] >= 65) && (word[0] <= 90))
		head_index = word[0] % 65;
	else if((word[0] >= 97) && (word[0] <= 132))
		head_index = word[0] % 97;
	else
		head_index = 26;

	int index;
	Slist_word *temp= head[head_index];
       
        //if index is null
	if(head[head_index] == NULL)
	{
		return FAILURE;
	}
	Slist_file_table *ptr= temp ->file_table;

        //traversing till head is null
	while(temp)
	{       
                //if word is matched
		if(!(strcmp(temp->word,word)))
		{

			printf("\n[%d]	%s:	%d - file : %s : %d times\n", head_index, temp->word, temp->file_count, ptr->file_name, ptr->word_count);
                        
                        //move pointer to file link
			ptr = ptr->f_link;

                        //traverse till file pointer is not null
		       	while(ptr)
		 	{
				printf("\n\t\t\t   %s: %d times\n",ptr->file_name, ptr->word_count);
                                //move file_link
				ptr = ptr-> f_link;
			}
                           

			return SUCCESS;
		}
                //move word link
		temp= temp ->link;
	}
	return FAILURE;

}



