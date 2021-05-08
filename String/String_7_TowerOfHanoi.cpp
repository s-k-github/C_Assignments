/*7: A program is to be written to implement the tower of Hanoi Problem. */
#include <stdio.h>

void tower(char,char,char,int);
int main()
{
	int n;
	printf("\nenter number: ");
	scanf("%d",&n);
	
	tower('A','B','C',n);
	return 0;
}
void tower(char from,char to,char other,int n)
{
	
	if(n==1)
		printf("\n\t %c to %c",from,other);
	if(n>1)
	{
		tower(from,other,to,n-1);
		tower(from,to,other,1);
		tower(to,from,other,n-1);
	}
}
