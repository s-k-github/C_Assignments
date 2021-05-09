/*1. Write a C program to input basic salary of an employee and calculate its Gross salary according to
following: Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include<stdio.h>

int main()
{
	float gross,basic,hra,da;
	printf("Please enter basic salary to calculate gross salary :");
	scanf("%f",&basic);
	
	if(basic<=10000)
	{
		hra=basic*0.2;
		da=basic*0.8;
	}
	else if(basic<=20000)
	{
		hra=basic*0.9;
		da=basic*0.25;
	}
	else
	{
		da=basic*0.95;
		hra=basic*0.3;
	}
	gross=basic+hra+da;
	printf("Gross salary for provided salary will be: %.2f",gross);
	return 0;
}
