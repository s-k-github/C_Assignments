/*Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.*/
#include<stdio.h>
#include<stdlib.h>
float calculate(float,float,char);
int main()
{
	float a,b;
	char ch;
	printf("\nPlease enter 2 numbers: ");
	scanf("%f%f",&a,&b);

	printf("\nOperation to be performed (+ - * /) :");
	scanf(" %c",&ch);
	
	printf("%.2f %c %.2f = %.3f",a,ch,b,calculate(a,b,ch));
	return 0;
}

float calculate(float a,float b,char ch)
{
	float result;
	switch(ch)
	{
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '*':
			result=a*b;
			break;
		case '/':
			result=a/b;
			break;
		default: 
			printf("\nWrong operation chosen");
			exit(0);
	}
	return result;
}



