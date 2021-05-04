/*2. Find all prime no.'s in runtime array*/

#include<stdio.h>
void main()
{
     int arr[10],i,n,j,count;
     
     printf("Enter the size of the array : ");
     scanf("%d",&n);
     printf("Enter the elements of the array: ");
     for(i=0;i<n;i++)
     {
           scanf("%d",&arr[i]);
     }
     
     printf("Array is :");
     for(i=0;i<n;i++)
     {
           printf("\t %d",arr[i]);
     }
     
     printf("\n\nAll the prime numbers in the array are : ");
     for(i=0;i<n;i++)
     {
		count=0;
           for(j=2;j<arr[i];j++)
           {
                 if(arr[i]%j==0)
                 {
                       count=1;
                       break;
                 }
           }
           if(count==0)
           {
                 printf("\t %d",arr[i]);
           }
    }
    printf("\n");
}
