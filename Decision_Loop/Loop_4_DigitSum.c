/*4. Accept a number and display its sum of digits. */
#include<stdio.h>
int main()
{
	int number,lastdig,sum=0;
	printf("Please enter the number to find sum of the digits : ");
	scanf("%d",&number);
	printf("Number: %d\n",number);
	while(number>0)
	{
		lastdig=number%10;
		sum+=lastdig;
		number/=10;
	}
	printf("Sum of digits: %d\n",sum); 
	return 0;
}
