/*7. Write a C program to input week number and print week day. */
#include<stdio.h>
int main()
{
	int week;
	char *(a[7])={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"}; 
    printf("\nEnter the week number : ");
    scanf("%d",&week);
    
    if(week<8 && week>0)
        printf("\nWeekday is: %s\n",a[week-1]);
    else
    	printf("\nPlease enter weekday between 1 to 7");
    return 0;
}
