#include"stack.h"

//Evaluate the expression
int evolution(char postfix[])
{

    //Declaring the local variable
    int i = 0,result = 0;;
    char num = postfix[i];
    int num1,num2;

    //Check upto NULL Condition
    while(num != '\0')
    {
    	//Check for the digit
	if(isdigit(num))
	    push(num - '0');

	//Check for the operator
	else if(oper(num) == 1)
	{
	    num1 = pop();
	    num2 = pop();
	    switch(num)
	    {
		case '+':
		    result =num2 + num1;
		    break;

		case '-':
		    result = num2 - num1;
		    break;

		case '*':
		    result =num2 * num1;
		    break;

		case '/':
		    result = num2 / num1;
		    break;
	    }

	    //Push the result into stack
	    push(result);
	}
	i++;
	num = postfix[i];
    }
    return result;

}


