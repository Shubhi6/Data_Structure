#include"header.h"
int save_database(Slist_word **head,  FILE *fd)
{
	char word[100], ch;
	int i =0,index;
	Slist_word *ptr_head = *head;
	Slist_file_table *ptr;
	fd = fopen("backup.txt", "w");
	if(fd == NULL)
	{
		perror("backup.txt");
		exit(1);
	}

	for(int i=0; i <26; i++)
	{
		ptr_head=head[i];

		if(head[i] == NULL)
		{
			continue;

		}
		fflush(stdin);


		while(ptr_head)
		{
			fprintf(fd,"#%d:",i);
			fprintf(fd,"%s:%d:",ptr_head->word,ptr_head->file_count);

			ptr = ptr_head->file_table;
			while(ptr)
			{
				fprintf(fd,"%s:",ptr->file_name);
				fprintf(fd,"%d",ptr->word_count);
				ptr = ptr->f_link;

			}

			fprintf(fd,"#\n");
			ptr_head= ptr_head -> link;
		}
	}

	fclose(fd);


}
