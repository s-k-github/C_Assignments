/*Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice, then based on that perform the desired operations.*/
//#include<stdio.h>
#include "Link.h"
void calling(int);
int main()
{
	int ch;
	printf("\nChoose option:\n1: fahrenheit to celsius\n2: Area, Perimeter of Rectangle and circle \n3: Sum, Reverse of 3 digit number \n4: Even or odd number\n5: Calculate total salary from basic salary\n6: Price of item from Discount\n7: Greatest of three numbers\n8: Mathematical Operation\n9: Discounted price for user \nYour choice will be : ");
	scanf("%d",&ch);
	calling(ch);
	return 0;
}

void calling(int ch)
{
	switch(ch){
		case 1:
			F2Cget();
			break;
		case 2:
			RectCircleGet();
			break;
		case 3:
			sum_rev_get();
			break;
		case 4:
			EvenOddget();
			break;
		case 5:
			SalaryGet();
			break;
		case 6:
			Discountget();
			break;
		case 7:
			Greatestget();
			break;
		case 8:
			Mathgetput();
			break;
		case 9:
			StudentDiscountget();
			break;
		default:
			printf("\nWrong input entered. Please try again");
	}
}
