/*28. Write a C program to print all alphabets from a to z */
#include<stdio.h>
void print();
int main()
{
	print();
	return 0;
}
void print()
{
	int i=0;
	printf("\nA-Z letters:\n");
	for(i=0;i<26;++i)
		printf(" %c",'A'+i);
	printf("\n\na-z letters:\n");
	for(i=0;i<26;++i)
		printf(" %c",'a'+i);
}

