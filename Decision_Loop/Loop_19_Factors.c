/*19. Write a C program to find all factors of a number.*/
#include<stdio.h>
int get();
void find(int);
int main()
{
	get();
	return 0;
}
int get()
{
	int n;
	printf("\nPlease a enter a  number : ");
	scanf("%d", &n);
	find(n);
}
void find(int n)
{
	int i;
	printf("Factors are: ");
	for(i=1;i<=n;i++)
		if(n%i==0)
			printf(" %d",i);
}
