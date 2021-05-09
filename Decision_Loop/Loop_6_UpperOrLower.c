/*6. Write a C program to check whether a character is uppercase or lowercase alphabet. */
#include<stdio.h>
int main()
{
	char ch;
	printf("Please enter a character to check for upper/lowercase: ");
	scanf("%c",&ch);
	
	if(ch<='Z' && ch>='A')
		printf("Its uppercase");
	else if(ch<='z' && ch>='a')
		printf("Its lowercase");
	else
		printf("Wrong input entered");
	return 0;
}

