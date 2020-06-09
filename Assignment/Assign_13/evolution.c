#include"stack.h"

//Function for the evaluate the expression
int evolution(char postfix[])
{

    //Declaring the local variable
    int i = 0,result = 0;
    char num = postfix[i];
    int num1,num2;

    //Check to the NULL condition
    while(num != '\0')
    {

    	//Check the input is digit or not
	if(isdigit(num))
	    push(num - '0');
	else if(oper(num) == 1)
	{
	    
	    //Removing the data from the stack
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


