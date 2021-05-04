/*14. Write a C program to count number of digits in a number. */
#include<stdio.h>
int replace(int);
int convert(int);

void get();
void find(int);
int main()
{
	get();
	return 0;
}
void get()
{
	int n;
	printf("\nPlease enter positive or negative number to count digits in it: ");
	scanf("%d",&n);
	
	find(convert(n));
}
int replace(int number)
{
	printf("\tnumber= %d",number);
	if (number == 0)
		return 0;
// Extract the last digit and change it if needed
int digit = number % 10;
if (digit == 0)
digit = 1;

	printf("\n\tafter number= %d",number);

// Convert remaining digits and append the last digit
return replace(number/10) * 10 + digit;
}

int convert(int number)
{
if (number == 0)
return 1;
else
return replace(number);
}

void find(int n)
{
	printf("\nValue of n %d",n);
	int counter=0;
	while(n!=0)
	{
		n/=10;
		counter++;

	}
	printf("\nDigits: %d",counter);
}

