/*Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise  da, ta and hra will be 15%,25% and 30% respectively.*/

#include<stdio.h>
void calculate(float);
float get(void);
int main()
{
	calculate(get());
	return 0;
}

float get()
{
	float basic;
	printf("\nPlease enter basic salary: ");
	scanf("%f",&basic);
	return basic;
}
void calculate(float basic)
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

