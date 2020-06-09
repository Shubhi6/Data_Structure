#include"stack.h"
//Function for the convert infix to the prefix
int prefix(char infix[],char pre[])
{
    //Declaring local variable
    int i, j, k = 0;
    char expr,num;
    char temp[SIZE];
    char temp1[SIZE];
    int len = strlen(infix);

    //Reverse the string
    for(i = len - 1; i >= 0; i--)
    {
	temp[k++] = infix[i];
    }
    temp[k] ='\0';

    strcpy(infix,temp);

    //Chenge the parenthesis
    for(i = 0; i <= len - 1; i++)
    {
	if(infix[i] == ')')
	    infix[i] = '(';
	else if(infix[i] == '(')
	    infix[i] = ')';
    }

    push('(');   
    strcat(infix,")");   

   // puts(infix);
    i = 0;
    j = 0;
    num = infix[i];         

    //Check upto NULL 
    while(num != '\0')
    {
	if(num == '(')
	{
	    push(num);
	}

	//Check for the digit and alphabet
	else if(isalnum(num))
	{
	    pre[j] = num;
	    j++;
	}

	//Check for the opertator
	else if(oper(num) == 1)
	{
	    expr = pop();
	    while(oper(expr) == 1 && precidence(expr)>= precidence(num))
	    {
		pre[j] = expr;
		j++;
		expr = pop();
	    }
	    push(expr);


	    push(num);
	}

	//Check for the close parenthesis
	else if(num == ')')
	{
	    expr = pop();
	    while(expr != '(')
	    {
		pre[j] = expr;
		j++;
		expr = pop();
	    }
	}
	else
	    return FAILURE;

	i++;


	num = infix[i]; 
    } 

    pre[j] = '\0';
    k = 0;
    for(i = len - 1; i >= 0; i--)
    {
	temp1[k++] = pre[i];
    }
    temp1[k] ='\0';

   strcpy(infix,temp1);
   printf("%s\n",temp1);

    return SUCCESS;

}
//Function for the remove top data from stack
int pop()
{
    //Check the list is empty or not
    if(EMPTY == isempty())
    	return FAILURE;
    else
    {
    	top--;
    	return stack[top]; 
    }
}
//Function for the push the data to stack
int push(int value)
{
    //Check the stack is full or not
    if(FULL == isfull())
    {
    	return FAILURE;
    }
    else
    {
    	stack[top] = value;
    	top++;
    }
    return SUCCESS;
}
int isfull()
{
    if(SIZE == top)
    	return FULL;
    else
    	return NOT_FULL;
}
int isempty()
{
    if(top == 0)
    	return EMPTY;
    else
    	return NOT_EMPTY;
}
//Check for the precidense
int precidence(int prec)
{
    if(prec == '*' || prec == '/')
    	return 3;
    else if(prec == '+' || prec == '-')
    	return 2;
    else
    	return 0;
}
//Check for the opertator
int oper(int oper)
{
    if(oper =='*' || oper == '+' || oper == '-' || oper == '/')
    	return 1;
    else
    	return 0;
}


