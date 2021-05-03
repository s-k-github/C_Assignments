/*Find the price of item when discount is given (specify different discount based on price)*/
#include<stdio.h>
void get_calculate();
void calculate(float,float);

int main()
{
	get_calculate();
	return 0;
}
void get_calculate()
{
	float price,discount_percentage;
	printf("\nPlease enter price of the item : ");
	scanf("%f",&price);
	
	printf("\nPlease enter discount on the item : ");
	scanf("%f",&discount_percentage);
	calculate(price,discount_percentage);
}
void calculate(float price,float discount_percentage)
{
	float discount_amount,discount_price;
	printf("\nDiscount amount: %.3f",discount_amount=discount_percentage*price/100);
	printf("\nDiscount price: %.3f",discount_price=price-discount_amount);
}
