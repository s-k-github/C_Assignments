/*Check if the given number is even or odd.*/
#include<stdio.h>

int get();
void check(int);
int main()
{
	check(get());
	return 0;
}
int get()
{
	int num;
	printf("\nPlease enter a number to check for even odd: ");
	scanf("%d",&num);
	return num;
}
void check(int num)
{
	if(num%2==0)
		printf("\nGiven number is an even number");
	else
		printf("\nGiven number is an odd number");
}
