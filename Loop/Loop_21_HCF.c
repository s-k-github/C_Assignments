/*21. Write a C program to find HCF (GCD) of two numbers.*/
#include<stdio.h>
int get();
int HCF(int,int);
int main()
{
	get();
	return 0;
}
int get()
{
	int n,m;
	printf("\nenter  number : ");
	scanf("%d", &n);
	printf("\nenter  number : ");
	scanf("%d", &m);
	printf("\nResult: %d",n,m,HCF(n,m));
}
int HCF(int n,int m)
{
	int gcd=0,i,min=0;
	min=n<m?n:m;
	for(i=1;i<=(min/2);++i)
	if(n%i==0 && m%i==0)
			gcd=i;
		
	return gcd;
}
