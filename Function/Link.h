#include<stdio.h>

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
			 
	}
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
float Mathcalculate(float a,float b,char ch)
{
	float result;
	switch(ch)
	{
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '*':
			result=a*b;
			break;
		case '/':
			result=a/b;
			break;
		default: 
			printf("\nWrong operation chosen");
			 
	}
	return result;
}

void Mathgetput()
{
	float a,b;
	char ch;
	printf("\nPlease enter 2 numbers: ");
	scanf("%f%f",&a,&b);

	printf("\nOperation to be performed (+ - * /) :");
	scanf(" %c",&ch);
	
	printf("%.2f %c %.2f = %.3f",a,ch,b,Mathcalculate(a,b,ch));
}




float Greatestcalculation(float a,float b,float c)
{
	//float greatest;
	if(a>=b)
		if(a>=c)
			return a;
		else
			return b;
	
	else
		if(b>=c)
			return b;
		else 
			return c;
	
	
}
void Greatestget()
{
	float a,b,c;
	printf("\nPlease enter 3 numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nGreatest of three number is: %f",Greatestcalculation(a,b,c));
}



void Discountcalculate(float price,float discount_percentage)
{
	float discount_amount,discount_price;
	printf("\nDiscount amount: %.3f",discount_amount=discount_percentage*price/100);
	printf("\nDiscount price: %.3f",discount_price=price-discount_amount);
}

void Discountget()
{
	float price,discount_percentage;
	printf("\nPlease enter price of the item : ");
	scanf("%f",&price);
	
	printf("\nPlease enter discount on the item : ");
	scanf("%f",&discount_percentage);
	Discountcalculate(price,discount_percentage);
}
void Salarycalculate(float basic)
{
	float da,hra,ta;
	float total_salary;
	if(basic<=5000)
	{
		da  = basic * 0.1;
        hra = basic * 2.5;
        ta = basic * 0.2;
	}
	else
	{
		da  = basic * 1.5;
        hra = basic * 0.3;
        ta = basic * 2.5;
	}
	printf("\nTotal Salary: %.2f\n",total_salary=basic+da+hra+ta);
}

void SalaryGet()
{
	float basic;
	printf("\nPlease enter basic salary: ");
	scanf("%f",&basic);
	Salarycalculate(basic);
}
void check(int num)
{
	if(num%2==0)
		printf("\nGiven number is an even number");
	else
		printf("\nGiven number is an odd number");
}
void EvenOddget()
{
	int num;
	printf("\nPlease enter a number to check for even odd: ");
	scanf("%d",&num);
	check(num);
	
}
void sum_rev(int num)
{
	int sum=0,rev=0,remain;
	while(num)
	{
		remain=(num%10);
		sum+=remain;
		rev=rev*10+remain;
		num/=10;
	}
	printf("Sum of digits: %d\nReverse of a number: %d",sum,rev);
}

void sum_rev_get()
{
	int num;
	printf("\nPlease enter 3 digit number: ");
	scanf("%d",&num);
	
	if(num<1000 && num>99)
		sum_rev(num);
	else
	printf("\nPlease enter 3 digit number only");
}

void Roperation()
{
	float l,b,area,peri;
	printf("\nPlease enter length and breadth of rectangle: ");
	scanf("%f %f",&l,&b);
	
	area=l*b;
	peri=2*(l+b);
	printf("Area: %.2f\nPerimeter: %.2f\n---------------------------------------------------",area,peri);
}
void Coperation()
{
	float rad,area, perm;
 
    printf("\nEnter radius of circle: ");
    scanf("%f",&rad);
    
    area=3.14*rad*rad;
    perm=2*3.14*rad;
    
    printf("Area: %.2f \nPerimeter: %.2f\n---------------------------------------------------",area,perm);

}
void RectCircleGet()
{
	int ch=0;
	
	printf("\nChoose option:\n1. Rectangle's area and perimeter\n2. Circle's area and perimeter\n\nYour selection will be: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			Roperation();
			break;
		case 2:
			Coperation();
			break;
		default:
			printf("Wrong choice entered\n");
	}
	
}

void F2Cget()
{
	float Celsius;
	printf("Please Temprature in Celsius: ");
	scanf("%f",&Celsius);
	//return Celsius;
	printf("C to F : %.2f F",Celsius*(9.0/5.0)+32.0);

}
