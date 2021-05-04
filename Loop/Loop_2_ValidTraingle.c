/*2. Write a C program to input angles of a triangle and check whether triangle is valid or not. */

#include<stdio.h>

int main()
{
	float i,a1,a2,a3;
	//printf("Please enter angles of the triangle: \n");
	printf("Please enter angles of the triangle:\n");
	scanf("%f",&a1);
	scanf("%f",&a2);
	scanf("%f",&a3);
	if((a1+a2+a3)==180.00)
		printf("\nIt's a triangle");
	else
		printf("\nIt's not a triangle. Triangle having exact 180 degrees total is a triangle.\n");
	return 0;
}
