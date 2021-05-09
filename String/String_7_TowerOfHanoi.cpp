/*7: A program is to be written to implement the tower of Hanoi Problem. */
#include <stdio.h>

void tower(char,char,char,int);
int main()
{
	int n;
	printf("\nPlease enter total number of disks: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\nTotal disks cant be less than 1");
		return 0;
	}
	printf("\nSolution for tower of hanoi based on your input: \n");
	tower('A','B','C',n);
	return 0;
}
void tower(char from,char to,char other,int n)
{
	
	if(n==1)
		printf("\n\tMoving disk from %c to %c",from,other);
	if(n>1)
	{
		tower(from,other,to,n-1);
		tower(from,to,other,1);
		tower(to,from,other,n-1);
	}
}
