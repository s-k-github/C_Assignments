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
	printf("\nenter  number : ");
	scanf("%d", &n);
	
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
		printf("\nperfect number");
	else 
		printf("\nnot a perfect number");
}
