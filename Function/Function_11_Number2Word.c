#include<stdio.h>
#include <string.h>

void get();
void convert(char*);
int main()
{
	get();
	return 0;
}
void get()
{
	char n[3];
	printf("\nPlease enter a number: ");
	scanf("%s",&n);
	printf("");
	convert(n);
}

void convert(char *n)
{
	int length=strlen(n);
	if(length==0)
	{
		printf("Empty string");
		return;
	}
	char *singles[]={ "zero", "one", "two", "three", "four","five","six", "seven", "eight", "nine"};
	char *two_digit[]={"", "ten", "eleven", "twelve", "thirteen", "fourteen","fifteen", "sixteen","seventeen", "eighteen", "nineteen"};
	char *tens_digits[]={"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
	if(length==1)
	{
		printf("%s\n",singles[*n-'0']);
		return;
	}
	while(*n!='\0')
	{
		if (*n == '1') 
		{
			int sum = *n - '0' + *(n + 1)- '0';
			printf("%s\n", two_digit[sum]);
			return;
		}
		else if(*n=='2' && *(n+1)==0)
		{
			printf("Twenty\n");
			return;
		}
		else 
		{
			int i = *n - '0';
			printf("%s ", i? tens_digits[i]: "");
			++n;
			if (*n != '0')
				printf("%s ", singles[*n - '0']);
		}
		++n;
	}	
	
	
}
