/*25. Write a C program to check whether a number is Perfect number or not. */
#include<stdio.h>
#include<stdlib.h>
int get();
int find(int);
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
	if(n<=0)
	{
		printf("\nInput must be positive and non-zero");
		exit(0);
	}
	find(n);
}
int find(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
		printf("\n%d is a perfect number",n);
	else 
		printf("\n%d is not a perfect number",n);
}
