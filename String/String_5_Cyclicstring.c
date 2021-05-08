/*5: Write a program to cyclically permute a string one character at a time.
E.g.: If space is the input the output should produce
space paces acesp cespa espac*/

#include<stdio.h>
#include <string.h>
void PermuteStr(char[]);

int main()
{
	char arr[20] = {'\0'};
	printf("enter: ");
	scanf("%[^'\n']s",arr);
	
	PermuteStr(arr);
	return 0;
}
void PermuteStr(char str[])
{
	int len=strlen(str),i;
	char t[len];

	for(i=0;i<len;i++)
	{
		int j=i;
		int k=0;
		while(str[j]!='\0')
		{
			t[k]=str[j];
			k++;
			j++; 
		}
		j = 0;
		while(j<i)
		{
			t[k]=str[j];
			j++;
			k++;
		}
		printf("%s   ",t);
	}
}

