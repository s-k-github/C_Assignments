/*15. Write a C program to find first and last digit of a number. */
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
	printf("Please a enter a  number : ");
	scanf("%d", &n);
	find(n);
}
void find(int n)
{
	int LastDigit = 0, FirstDigit = 0;
	printf(" Given number : %d\n",n);
	LastDigit = n % 10;
	while(n != 0)
	{
		FirstDigit = n;
		n/=10;
	}
	printf("First digit  = %d\n",FirstDigit);
	printf("Last digit = %d\n",LastDigit);
}
