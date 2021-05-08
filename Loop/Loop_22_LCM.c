/*22. Write a C program to find LCM of two numbers.*/
#include<stdio.h>
int get();
int LCM(int,int);
int main()
{
	get();
	return 0;
}
int get()
{
	int n,m;
	printf("\nenter number : ");
	scanf("%d", &n);
	printf("\nenter  number : ");
	scanf("%d", &m);
	LCM(n,m);
}
int LCM(int n,int m)
{
	int min=n<m?n:m,lcm,i,gcd;
	for(i=1;i<=(min/2);++i)
		if(n%i==0 && m%i==0)
			gcd=i;
	lcm=(n*m)/gcd;
	printf("\Result : %d",lcm);
}
