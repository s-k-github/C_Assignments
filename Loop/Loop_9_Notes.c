/*9. Write a C program to count total number of notes in given amount. */
#include<stdio.h>
void perform();
void operation(int);
int main()
{
	perform();
	
	return 0;
}
void perform()
{
	int amount;
	printf("\nPlease enter the amount : ");
	scanf("%d",&amount);
	operation(amount);
}
void operation(int amount)
{
	int temp,a[]={2000,500,200,100,50,20,10,5,2,1},i;
	temp=amount;
	for(i=0;i<10;i++)
	{
		printf("\nTotal %d notes: %d",a[i],temp/a[i]);
		temp%=a[i];
	}
}

