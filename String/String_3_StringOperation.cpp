/*3: Using pointers write your own functions for the following:
a. String comparison b. String concatenate
c. String copy
d. String length. */

#include<stdio.h>
#include<stdlib.h>
int Compare(char*, char*);
void Concat(char*, char*);
void Copy(char*, char*);
int Length(char*);

int main()
{
	int result = 0;
	int choice = 0;
	int done = 1;
	char string1[20] = {'\0'};
	char string2[20] = {'\0'};

	while(done){
		printf("\nPlease choose one: \n");

		printf("********************************************\n");
		printf("1. String comparison\n");
		printf("2. String concatenate\n");
		printf("3. String copy\n");
		printf("4. String length\n");
		printf("0. exit\n");
		printf("********************************************\n");

		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the string one: ");
				scanf(" %[^'\n']s",string1);
				printf("Enter the second string two: ");
				scanf(" %[^'\n']s",string2);
	
				result = Compare(string1,string2);
				if(result == 0)
					printf("Strings are equal\n");
				else
					printf("Strings are not equal\n");
	
				break;

			case 2:

				printf("Enter the string one: ");
				scanf(" %[^'\n']s",string1);
				printf("Enter the second string two: ");
				scanf(" %[^'\n']s",string2);
				Concat(string1,string2);
				printf(" Concatenated string:  %s\n",string1);
				break;
			case 3:
				printf("Enter the string one: ");
				scanf(" %[^'\n']s",string1);
				Copy(string2,string1);
				printf("Copied str is %s: \n",string2);
				break;
			case 4:
				printf("Enter the string one: ");
				scanf(" %[^'\n']s",string1);
				printf("Length of the string is %d\n",Length(string1));
			    break;
			case 0: done = 0;
				break;

		}

	}
}

int Compare(char *str1, char *str2)
{
	int flag = 0;
	if(str1 == NULL || str2 == NULL)
		return -1;

	while(( *str1 != '\0' )&& (*str2 != '\0'))
	{
		if(*str1 !=  *str2)
		{
			flag = 1;
			break;
		}
		str1++;
		str2++;
	}
	if(flag == 1)
		return 1;
	else
		return 0;
}

void Concat(char *dest, char *src)
{
	if(dest == NULL || src == NULL)
		return;
	while(*dest != '\0')
		dest++;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void Copy(char *dest, char *src)
{
	if(dest == NULL || src == NULL)
		return;
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*src = '\0';
}

int Length(char *str)
{
	int count = 0;
	if(str == NULL)
		return -1;
	while(*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
