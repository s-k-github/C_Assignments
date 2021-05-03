/*Accept the price from user. Ask the user if he is a student (user may say yes or no). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%. But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.*/
//enum choice{yes,no}ch;
/*
#include<stdio.h>
#include<stdlib.h>
void StudentDiscountget();
void StudentDiscountcalculate(float,int);
int main()
{
	StudentDiscountget();
	return 0;
}
void StudentDiscountget()
{
	int ch;
	float price;
	printf("\nPlease enter the price: ");
	scanf("%f",&price);
	
	printf("\nAre you a student\nEnter '1' for yes\nEnter '2 for no \n");
	scanf("%d",&ch);
	
	StudentDiscountcalculate(price,ch);
}
void StudentDiscountcalculate(float price,int ch)
{
	float purchase;
	switch(ch)
	{
		case 1:
			if(price>500)
				purchase=(price*20)/100;
			else
				purchase=(price*10)/100;
			printf("Discounted Price is %.2f",(price-purchase));
			break;
		case 2:
			if(price>600)
			{
				purchase=(price*15)/100;
				printf("Discounted Price is %.2f",(price-purchase));
			}
			else
				printf("Not eligible for discount\nYour Price=%.2f",price);
			break;
		default:
			printf("\nWrong input entered");
			exit(0);
	}
}*/
