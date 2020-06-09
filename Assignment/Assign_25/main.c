#include "hash.h"

int main()
{
    int num,option;
    int result,key;
    numbers *hash_table[SIZE];

    create_node(hash_table,SIZE);

    while(1)
    {
	printf("Enter the option:\n 1.Insert_num\n 2.Search_num\n 3.Delete_num\n 4.Print_table\n 5.Exit\n option:: ");
	scanf("%d", &option);

	switch(option)
	{
	    case 1:
		printf("Enter the num:\n");
		scanf("%d", &num);
		key = hash_fun(num);
		result = insert_num(num,&hash_table[key]);
		(result == SUCCESS)?printf("Insert SUCCESS\n"):printf("Insert FAILURE\n");
		break;
	    case 2:
		printf("Enter the num to be search:\n");
		scanf("%d", &num);
		key = hash_fun(num);
		result = search_num(num,hash_table[key]);
		(result == DATA_FOUND)?printf("DATA_FOUND\n"):printf("DATA_NOT_FOUND\n");
		break;
	    case 3:
		printf("Enter the num to be delete:\n");
		scanf("%d", &num);
		key = hash_fun(num);
		result = delete_num(num,&hash_table[key]);
		(result == SUCCESS)?printf("Delete SUCCESS\n"):printf("Delete FAILURE\n");
		break;
	    case 4:
		print_table(hash_table);
		break;
	    case 5:
		exit(1);
		break;
	}
    }
    return 0;
}
