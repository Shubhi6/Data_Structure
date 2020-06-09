#include"stack.h"

//Function for the convert infix to postfix
int postfix(char infix[],char post[])
{

    //Declaring local variable
    int i, j;
    char num;
    char expr;

    //Push parenthesis to the stack
    push('(');   
    strcat(infix,")");              

    i = 0;
    j = 0;
    num = infix[i];         

    //Check upto NULL condition
    while(num != '\0')        
    {

    	//Check for the parentesisis
	if(num == '(')
	{
	    push(num);
	}

	//Check for the digit or alpha
	else if(isalnum(num))
	{
	    post[j++] = num;          
	    
	}

	//Check for the opertator
	else if(oper(num) == 1)     
	{
	    expr = pop();
	    while(oper(expr) == 1 && precidence(expr) >= precidence(num))
	    {
		post[j] = expr;                  
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
		post[j] = expr;
		j++;
		expr = pop();
	    }
	}
	else
	    return FAILURE;
	i++;
	num = infix[i]; 
    } 

    post[j] = '\0';
    printf("%s\n",post);

    return SUCCESS;
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
    	
//Function for the display the data
void peep(int top)
{
    int count = top;
    //Traverse upto stack is not empty
    while(!(isempty(count) == EMPTY))
    {
    	count--;

    	printf("%d\n",stack[count]);

    }
}

//Check for the stack empty
int isempty()
{
    if(top == 0)
    	return EMPTY;
    else
    	return NOT_EMPTY;
}

//Check for the stack full
int isfull()
{
    if(SIZE == top)
    	return FULL;
    else
    	return NOT_FULL;
}
#include"stack.h"

//Function for the check the operator
int oper(int oper)
{
    if(oper =='*' || oper == '+' || oper == '-' || oper == '/')
    	return 1;
    else
    	return 0;
}
#include"stack.h"

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
