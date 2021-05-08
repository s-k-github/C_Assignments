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
	printf("\nenter number : ");
	scanf("%d", &n);
	printf("Result: %d: %d",n,fact(n));
}

int fact(int n)
{
	if(n>=1)
		return n*fact(n-1);
	else 
		return 1;
}
