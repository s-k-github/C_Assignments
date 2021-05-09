/*20. Write a C program to calculate factorial of a number. */
#include<stdio.h>
int get();
int fact(int);
int main()
{
	get();
	return 0;
}
int get()
{
	int n;
	printf("\nPlease a enter a  number : ");
	scanf("%d", &n);
	printf("Factorial of %d: %d",n,fact(n));
}

int fact(int n)
{
	if(n>=1)
		return n*fact(n-1);
	else 
		return 1;
}
