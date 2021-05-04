// 6. Enter data for one matrix. Find its Transpose & display result.
#include <stdio.h>
 
int main()
{
	int row,col,i,j,a[row][col],transpose[col][row],k,l;
	printf("Enter row size of 2D array to perform transpose operation: ");
	scanf("%d",&row);
	printf("Enter column size of 2D array to perform transpose operation: ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	
	printf("\nTranspose Matrix: \n");
	for(k=0;k<row;k++)
	{
		for(l=0;l<col;l++)
			printf("\t%d",transpose[k][l]=a[l][k]);
		printf("\n");
	}
}	



