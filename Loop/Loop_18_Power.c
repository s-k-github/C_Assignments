/*18. Write a C program to find power of a number using for loop.*/
#include<stdio.h>
int get();
int find(int,int);
int main()
{
	get();
	return 0;
}
int get()
{
	int n,power;
	printf("\enter   number : ");
	scanf("%d", &n);
	printf("enter power : ");
	scanf("%d", &power);
	printf("result: %d",find(n,power));
}
int find(int n,int power)
{
	int i,result=1;
	for(i=0;i<power;i++)
		result*=n;
	return result;
}
