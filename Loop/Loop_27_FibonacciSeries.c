/*27. Write a C program to print Fibonacci series up to n terms. */
#include<stdio.h>
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
	printf("\nenter  number : ");
	scanf("%d", &n);
	find(n);
}
void find(int n)
{
	int first=0,second=1,next=first+second,i;
	for(i=0;i<n;i++)
	{
		printf(" %d",first);
		first=second;
		second=next;
		next=first+second;
	}
}
