/*29. Get this output using simple loops. Here no of iterations are important. */
#include<stdio.h>
int get();
void print(int);
int main()
{
	get();
	return 0;
}
int get()
{
	int n;
	printf("\nenter number : ");
	scanf("%d", &n);
	print(n);
}
void print(int n)
{
	int i,j,whitespace;
	for(i=n;i>=1;i--)
	{
		for(whitespace=n;whitespace>i;whitespace--)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%c",123-j);
		for(j=j-2;j>=1;j--)
			printf("%c",123-j);
		printf("\n");
	}
}
