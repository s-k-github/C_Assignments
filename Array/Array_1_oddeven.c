    /*1. Find all odd and even no.'s in runtime array */
	
	#include<stdio.h>
    void main()
    {
        int array[10], i, num;
        printf("Enter the size of an array : ");
        scanf("%d", &num);
        printf("Enter the elements :\n");
         for (i = 0; i < num; i++) 
        {
           scanf("%d", &array[i]);
        }
        printf("\nEven num are : ");
        for (i = 0; i < num; i++) 
        {
            if (array[i] % 2 == 0) 
            {
                printf("%d \t", array[i]);
            }
        }
           printf("\nOdd num are : ");
            for (i = 0; i < num; i++) 
           {
            if (array[i] % 2 != 0) 
            {
                printf("%d \t", array[i]);
            }
        }
	}
