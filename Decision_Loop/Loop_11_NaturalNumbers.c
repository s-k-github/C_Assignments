/*11. Write a C program to print all natural numbers from 1 to n. - using while loop */
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
	printf("\nPlease enter number to find natural numbers from 1 to n: ");
	scanf("%d",&n);
	
	return n;
}
void find(int n)
{
	int i=1;
	printf("\nNatural numbers: ");
	while(i<=n)
	{
		printf(" %d",i);
		i++;
	}
}
