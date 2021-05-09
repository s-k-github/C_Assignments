/*26. Write a C program to check whether a number is Strong number or not. */
#include<stdio.h>
#include<stdlib.h>
int get();
void find(int);
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
		printf("\nNumber must be positive and non zero");
		exit(0);
	}
	find(n);
}
void find(int n)
{
	int original=n,i,fact=1,lastdigit=0,sum=0;
	while(n!=0)
	{
		fact=1;
		lastdigit=n%10;
		for(i=1;i<=lastdigit;++i)
			fact*=i;
		sum+=fact;
		n/=10;
	}
	if(original==sum)
		printf("\n%d is a strong number",original);
	else
		printf("\n%d is not a strong number",original);
}
