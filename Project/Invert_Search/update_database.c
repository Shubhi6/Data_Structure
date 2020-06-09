#include "header.h"

//Function to update_database
int update_database(Slist_word **head,file_list **head1)
{

	char buff[100];
	char word[100];
	//File pointers
	FILE *fd,*fp1, *fp2;
	int flag = 0,head_index;
	fd = fopen("backup.txt","r");
	char str2[100];

	//Check file is empty or not
	if (fd == NULL)
	{
		printf("Error: Failed to open file\n");
		return 0;
	}
	//Loop to read file contents word by word
	while (fscanf(fd,"%s",buff) != EOF)
	{
		fp1 = fopen("update.txt","w+");
		char *token;
		int index;

		token = strtok(buff,":#");
		index = atoi(token);
		printf("index = %d\n",index);

		char *str1;
		while ((str1 = strtok(NULL,":#")) != NULL)
		{
			fprintf(fp1,"%s ",str1);
		}
		fprintf(fp1,"\n");

		//Allocate memory for struct 1
		Slist_word *new = malloc(sizeof(Slist_word));
		new->link = NULL;
		new->file_table = NULL;
		//Allocate memory for struct 2
		Slist_file_table *new1 = malloc(sizeof(Slist_file_table));
		new1->f_link = NULL;
		fclose(fp1);
		fp2 = fopen("update.txt","r");

		while (fscanf(fp2,"%s",word) != EOF)
		{
			//Check index is null or not
			if (head[index] == NULL)
			{
				flag = 0;
				head[index] = new;
				new->word = malloc(32);
				printf("%s \n", word);
				strcpy(new->word,word);
				fscanf(fp1,"%s",word);
				new->file_count = atoi(word);
				new->file_table = new1;
				Slist_file_table *temp1 = new1;

				while (fscanf(fp2,"%s",word) != EOF)
				{
					if (flag == 2)
					{
						Slist_file_table *new = malloc(sizeof(Slist_file_table));
						new->f_link = NULL;
						temp1->f_link = new;
						temp1 = new;
						flag = 0;
					}
					if (flag == 0)
					{
						temp1->file_name = malloc(32);
						strcpy(temp1->file_name,word);
						printf("file = %s\n",temp1->file_name);
						//Call function to create_file_names lists
						if (create_file_name(head1,temp1->file_name) == SUCCESS)
						{
							FILE *fp3 = fopen(temp1->file_name,"r");
							//Read till end of file
							while (!feof(fp3))
							{
								fscanf(fp3,"%s",str2);
								printf("str2 = %s\n",str2);
								if((str2[0] >= 65) && (str2[0] <= 90))
									head_index = str2[0] % 65;
								else if((str2[0] >= 97) && (str2[0] <= 122))
									head_index = str2[0] % 97;

                                                                 else
                                                                     head_index = 26; 
	
                 							printf("index = %d\n",head_index);
								//Call function to create_database
								create_database(&head[head_index],str2,temp1->file_name);
							}
						}

					}
		    else
		    {
			temp1->word_count = atoi(word);
		    }
		    flag = flag + 1;
		} 
	    }
	}
    }
    return SUCCESS;
}





