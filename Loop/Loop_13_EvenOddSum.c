/*13. Write a C program to find sum of all even and odd numbers between 1 to n.*/
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
	printf("\nPlease enter number to find addition of even and odd numbers: ");
	scanf("%d",&n);
	
	return n;
}
void find(int n)
{
	int counter=1,evenSum=0,oddSum=0;
	while(counter<=n)
	{
		if(counter%2==0)
			evenSum+=counter;
		else
			oddSum+=counter;
		counter++;
	}
	printf("\nAddition of even numbers till %d: %d",n,evenSum);
	printf("\nAddition of odd numbers till %d: %d",n,oddSum);
}

