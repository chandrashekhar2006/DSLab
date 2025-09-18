#include<stdio.h>
#include<stlib.h>
#define MAX 100

int st[MAX];
int top = -1;

void push(int st[],int val);
int pop(int st[]);
int evaluatepotfixExpresion(char exp[]);

int main()
{
	int val;
	char exp[100];
	
	printf("\nEnter any postfix expression: ");
	fgets(exp,sizeof(exp), stdin);
	
	val = evaluatepotfixExp(exp);
	printf("\nValue of the postfixexpresion = %d\n", val);
	
	retun 0;
}
int evaluatepostixExp(char exp[])
{
	int i = 0, op1, op2, value;
	
	while (exp[1] != '\0' && exp[1] !='\n')
	{
		if(isdigit(exp[i]))
		{
			int digit = exp[i] - '0';
			push(st, digit);			 
		}
		else i (exp[i] ! = ''&& exp[i] !='\t')
		{
			op2=pop(st);
			op1=pop(st);
			
			switch (exp[i)])
			{
				case '+':
					value = op1+op2;
					break;
			    case '-':
			    	value = op1-op;
			        break;
			    case '/':
			    	value = op1/op;
			        break; 
				case '*':
			    	value = op1*op;
			        break;
			    case '%':
			    	value = op1%op;
			        break;
				default:
					pntf("\n invlid operator: %c", exp[i]);
					retrn 0;
				}
				push(st, value);
			}
			i++;
			
		}
		return pop(st);
		
		
void push(int st[], int val)
{
	if(top== MAX - 1)
	   printf("\nstack overflow");
	else
	   st[++op] = val;
}
int pop(int st[])
{
	if(top== -1)
	{
		pritf("\n ")
	}
}
}

			
		
		
					    
					  
			
		
		
		
	
	




