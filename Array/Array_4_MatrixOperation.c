/* 4. Perform all the above operations for 2D arrays.*/

#include <stdio.h>
 
int main()
{
	int row=0,column=0;
	printf("\nPlease enter row size of 2D array: ");
	scanf("%d",&row);
	printf("Please enter column size of 2D array: ");
	scanf("%d",&column);
	
	int a[row][column];
	int i=0,j=0;
	printf("Please Enter array elements: \n");
	for(i=0;i<row;i++)
			for(j=0;j<column;j++)
				scanf("%d",&a[i][j]);
		
	int sum=0,min=a[0][0],max=a[0][0];
	
	int k=0,l=0;
	for(k=0;k<row;k++)
		{
			for(l=0;l<column;l++)
			{
				sum+=a[k][l];
				
				if(a[k][l]>max)
					max=a[k][l];
				if(a[k][l]<min)
					min=a[k][l];
			}
		}
	double avg=0, d=0;
	d=(double)row*column;
	avg=sum/d;
	printf("\nSum: %d\nAverage: %.3f\nMinimum: %d\nMaximum: %d\n",sum,avg,min,max);
	return 0;
}
