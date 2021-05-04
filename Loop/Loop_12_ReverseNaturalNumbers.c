/*12. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop */
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
	printf("\nPlease enter number to find natural numbers from n to 1: ");
	scanf("%d",&n);
	
	return n;
}
void find(int n)
{
	while(1<=n)
	{
		printf(" %d",n);
		n--;
	}
}

