/*5. Accept a number and display whether its an Armstrong number. */
#include<stdio.h>
int main()
{
	int number,sum=0,copynumber,remain;
	printf("\nPlease enter number to check whether its an Armstrong number :  ");
	scanf("%d",&number);
	
	copynumber=number;
	
	while(copynumber!=0)
	{
		remain=copynumber%10;
		sum+=remain*remain*remain;
		copynumber/=10;
	}
	if(number==sum)
		printf("\n%d is an armstrong number :",number);
	else
		printf("\n%d ain't an armstrong number :",number);
	return 0;
}
