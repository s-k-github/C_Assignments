/*14. Write a C program to count number of digits in a number. */
#include<stdio.h>
int get();
void find(int);
int main()
{
	find(get());
	return 0;
}
int get()
{
	int n;
	printf("\nenter number ");
	scanf("%d",&n);
	
	return n;
}
void find(int n)
{
	int counter=0;
	while(n!=0)
	{
		n/=10;
		counter++;
	}
	printf("\nResult: %d",counter);
}

