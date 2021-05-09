/*10. Write a C program to invert the case of alphabet. */
#include<stdio.h>
#include<stdlib.h>
char get();
void change(char);
int main()
{
	change(get());
	return 0;
}
char get()
{
	char c;
	printf("\nPlease enter a character: ");
	scanf("%c",&c);
	return c;
}
void change(char c)
{
	if(c>='A' && c<='Z')
		c = 'a' + (c - 'A');
	else if(c >= 'a' && c <='z')
		c = 'A' + (c - 'a');
	else
	{
		printf("\nInvalid input");
		exit(0);
	}
	printf("\nChanged case: %c ",c);
}
