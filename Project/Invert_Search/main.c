#include"header.h"
int main(int argc,char **argv)
{
	//declaration of variable
	FILE *fptr;
	int choice;
	int i = 0,head_index=0;
	FILE *file_ptr, *fd;
	char option;
	char word[100], *file_name, ch;
	int index =0;
	int status;
	file_list *head1 = NULL;
	Slist_word *head[27] = {NULL};

	//if argument is not given
	if(argc == 1)
	{
		printf("Please enter file name('s).\n");
		exit(0);
	}

	//if duplicates file is given
	for (int i = 1; i <= argc-2; i++)
	{
		for (int j = i+1; j <= argc-1; j++)
		{       
			//comparisaon of file
			if(strcmp(argv[i],argv[j]) == 0)
			{
				printf("ERROR!!Duplicates files.\nPlease enter unique file names\n");
				exit(1);
			}
		}
	}
	do
	{
		//taking choice
		printf("Enter your choice:\n1.Create Database\n2.Display Database\n3.Update Database\n4.Search\n5.Save Database\n6.Exit\nchoice::");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				//if argument is less than one
				if(argc < 2)
				{
					printf("Filename not entered in argument\n");
					return FAILURE;
				}

				//argument from starting to end
				for(int i = 1; i < argc; i++)
				{      
                                        //comparison if file already exist.
					if (create_file_name(&head1,argv[i]) == FILE_PRESENT)
					{
						printf("ERROR:FILE already exists\n");
						continue;
					}
					else 
					{
						file_name = argv[i];
						printf("***file name = %s\n", file_name);
						//file in read mode
						file_ptr = fopen(file_name, "r");
						//take char one by one to the end
						while((ch = fgetc(file_ptr)) != EOF)
						{
							//if char is space and end of line
							if(ch != ' ' && ch != '\n')
							{
								word[index] = ch;
								++index;
							}

							else if(( ch == ' ') || (ch == '\n'))
							{
								word[index] = '\0';
								//if there is space
								if(word[0] == '\0')
								{
									continue;
								}
								index =0;

								head_index = 0;
								//hash _fun taking
								if((word[0] >=65) && (word[0] <= 90))
									head_index = word[0] % 65;
								else if((word[0] >= 97) && (word[0] <= 132))
									head_index = word[0] % 97;
								else
									head_index = 26;
								printf("### head_index = %d ###\n",head_index);

								//fun to check
								if((create_database(&head[head_index], word, file_name)) == FAILURE)
								{
									perror("create database\n");
									exit(1);
								}
								else
									printf("SUCCESS\n");
							}
						}
					}
				}
				break;

			case 2:
				//fun for display
				print_database(head);
				break;



			case 3:
				//fun for update
				update_database(head,&head1);
				break;

			case 4:
				//taking word from user
				printf("Enter the term to search: \n");
				scanf("%s", word);
				//fun for searching
				status = search_database(head, word);
				if(status == SUCCESS)
					printf("word found in the database\n");
				else
					printf("Word not found\n");
				break;


			case 5:
				//fun for saving
				save_database(head,fd);
				break;

			case 6:
                                //fun for exist
				exit(1);
				break;

			default:
				printf("Invalid Choice");
		}

		printf("\nDo you want to continue(Y/N)?:\n");
		scanf("\n%c", &option);
	}while((option == 'y') || (option == 'Y'));

	return 0;

}
