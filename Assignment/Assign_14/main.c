#include"stack.h"
int main()
{

    //Declaring local variable
    char infix[SIZE], pre[SIZE];
    int option, result;
    char  ch;
    do
    {
    	//Choose the option
    	printf("1.Enter the expression\n2.Expression evolution\n3.exit\nchoose::\n");
	scanf("%d",&option);

	switch(option)
	{
	    case 1:
                //Case 1 for the enter the expression
		printf("Enter the expression:\n");
		getchar();
		scanf("%s",infix);
		result = prefix(infix,pre);
		(result == SUCCESS) ? printf("SUCCESS\n") : printf("FAILURE\n");
		break;

	    case 2:

	    	//Case 2 for the evoluate the expression
		result = evolution(pre);
		printf("result: %d\n",result);
		break;

	    default:
		printf("Please enter correct option !!\n");
	}
	printf("\nDo you want to continue(y/n)\n");
	scanf(" %c",&ch);
    }while(ch == 'y' || ch == 'Y');

}
