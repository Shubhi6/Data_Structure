#include"header.h"
void print_database(Slist_word **head)
{
        //declaration of variable
	Slist_word *temp;
	Slist_file_table *ptr;
	int i;

        //for printing from starting to end
	for(i = 0;i <= 26;i++)
	{       
                 //for printing index word
		for(temp = head[i];temp != NULL;temp= temp ->link)
		{
			printf("[%d] : %s :%d files\n", i, temp->word, temp->file_count);

                        //if another same index word is linked
                        for(ptr=temp->file_table;ptr != NULL;ptr = ptr -> f_link)
			{

				printf("\t\tFile name %s: %d times\n",ptr->file_name, ptr->word_count);

			}


		}

	}		

}

