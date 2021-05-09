/*23. Write a C program to check whether a number is Prime number or not. */
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
	find(n);
}
void find(int n)
{
	int i=2,counter=0;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			counter=1;
			break;
		}	
			
		++i;
	}
	if(counter==0)
		printf("\nNumber is prime");
	else
		printf("\nNumber is not a prime number");
}
