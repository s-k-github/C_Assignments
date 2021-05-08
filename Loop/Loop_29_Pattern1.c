/*29. Get this output using simple loops. Here no of iterations are important. */
#include <stdio.h>

void get();
void print(int);

int main()
{
	get();
	return 0;
}
void get()
{
	int n;
	printf("enter total rows :");
	scanf("%d",&n);
	print(n);
}
void print(int n)
{
	int i,j,k,l;

	for(i = 0; i<= n; i++)
	{
		for(j = n*2; j >= 0; j--)
			if(i == j)
				printf("%d",0);
			else if(i > j)
				printf("%d",i - j);
			else if( i < j && (j - i <= i))
				printf("%d",j - i);
			else
				printf(" ");
		printf("\n");
	}
	
	for(i = n-1; i>=0; i--){
		for(j = n * 2; j>=0; j--)
			if(i == j)
				printf("%d",0);
			else if(i > j)
				printf("%d",i -j);
			else if(i < j && (j-i <= i))
				printf("%d", j-i);
			else
				printf(" ");
		
		printf("\n");
	}
}
