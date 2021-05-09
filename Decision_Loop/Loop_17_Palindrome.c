/*17. Write a C program to check whether a number is palindrome or not.*/
#include<stdio.h>

void get();
int check(int);
int main()
{
	get();
	return 0;
}
void get()
{
	int n;
	printf("\nPlease a enter a  number : ");
	scanf("%d", &n);
	int result=check(n);
	if(result==0)
		printf("\n Number is palindrome");
	else
		printf("\n Number is not palindrome");
}
int check(int n)
{
	int original=n,lastDigit=0,rev=0,result=1;
	while(n!=0)
	{
		lastDigit=n%10;
		rev=rev*10+lastDigit;
		n/=10;
	}
	if(rev==original)
		result=0;
	return result;
}

