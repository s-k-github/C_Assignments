/*16. Write a C program to enter a number and print its reverse. */
#include<stdio.h>
int get();
int reverse(int);
int main()
{
	reverse(get());
	return 0;
}
int get()
{
	int n;
	printf("\nPlease a enter a  number : ");
	scanf("%d", &n);
	printf("\nReverse Number: %d",reverse(n));
}
int rev=0;
int reverse(int n)
{
	int rem;
	if(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		reverse(n/10);
	}
	else
      return rev;
	return rev;
	
}
