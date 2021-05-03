/*Accept a 3 digit number from user and find the sum of the digits and also reverse the number */
#include<stdio.h>
void sum_rev(int);
int main()
{
	int num;
	printf("\nPlease enter 3 digit number: ");
	scanf("%d",&num);
	
	if(num<1000 && num>99)
		sum_rev(num);
	else
	printf("\nPlease enter 3 digit number only");
	return 0;
}
void sum_rev(int num)
{
	int sum=0,rev=0,remain;
	while(num)
	{
		remain=(num%10);
		sum+=remain;
		rev=rev*10+remain;
		num/=10;
	}
	printf("Sum of digits: %d\nReverse of a number: %d",sum,rev);
}


