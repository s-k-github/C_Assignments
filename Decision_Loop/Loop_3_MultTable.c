/*3. Accept a number and display it multiplication table. */
#include<stdio.h>
int main()
{
	int number,i;
	printf("Please enter the number to print it's multiplication table: ");
	scanf("%d",&number);
	printf("Table of %d",number);
	for(i=1;i<=10;i++)
		printf("\n%d",number*i);
}
