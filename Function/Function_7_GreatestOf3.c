/*Write a program to find greatest of three numbers using nested if-else.*/

#include<stdio.h>
void get_calculation();
float calculation(float,float,float);
int main()
{
	get_calculation();
	return 0;
}
void get_calculation()
{
	float a,b,c;
	printf("\nPlease enter 3 numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nGreatest of three number is: %f",calculation(a,b,c));
}

float calculation(float a,float b,float c)
{
	//float greatest;
	if(a>=b)
		if(a>=c)
			return a;
		else
			return b;
	
	else
		if(b>=c)
			return b;
		else 
			return c;
	
	
}



