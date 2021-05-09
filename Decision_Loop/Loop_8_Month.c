/*8. Write a C program to input month number and print number of days in that month. */
#include<stdio.h>
int main()
{
	int num;	
	char *(a[12])={"Jan","Feb","March","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"}; 

	printf("Please enter the month number: ");
	scanf("%d",&num);
	
	if (num>0 || num<13)
	{
		if(num==2)
			printf("Feb has either 28 or 29 days");
		else if(num%2==0)
			printf("%s has days 30",a[num]);
		else
			printf("%s has days 31",a[num-1]);
	}
	else
		printf("Month number should be can be either or between 1 and 12 ");
	return 0;
}
