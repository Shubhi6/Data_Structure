#include"stack.h"
int main()
{

    //Declaring the local variable
    char  infix[SIZE],  post[SIZE];
    int  option, result;
 
    while(1)
    {
    	//Choose the option
	printf("1.Enter the expression\n2.Expression evolution\n3.Exit\n choose::\n");
	scanf("%d", &option);
	switch(option)
	{

	    //Case 1 for the enter the expression
	    case 1:
		printf("Enter the expression:\n");
		getchar();
		scanf("%s",infix);
		result = postfix(infix,post);
		(result == SUCCESS) ? printf("SUCCESS\n") : printf("FAILURE\n");
		break;

	    case 2:

	    	//Case 2 for the evolution
		result = evolution(post);
		printf(" result: %d\n",result);
		break;

	    case 3:
		exit(1);
		break;
	}
    }
	return 0;
}
