/*24. Write a C program to print all Prime numbers between 1 to n. */
#include<stdio.h>
#include<stdlib.h>
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
	int j=2;
	printf("Prime number till %d : ",n);
	while(j<=n)
	{
		int i=2,counter=0;
		while(i<=j/2)
		{
			if(j%i==0)
			{
				counter=1;
			break;
			}	
			++i;
		}
		if(counter==0)
				printf("%d ",j);
		++j;
	}
}
