/*Finding area and perimeter of rectangle or circle.*/
#include<stdio.h>

#define PI 3.14f

void Roperation(void);
void Coperation(void);
int main()
{
	int ch=0;
	while(ch!=3)
	{
	printf("\nChoose option:\n1. Rectangle's area and perimeter\n2. Circle's area and perimeter\n3. Exit\n\nYour selection will be: ");
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
	return 0;
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
    
    area=PI*rad*rad;
    perm=2*PI*rad;
    
    printf("Area: %.2f \nPerimeter: %.2f\n---------------------------------------------------",area,perm);

}
