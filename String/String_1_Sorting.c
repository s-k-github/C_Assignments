 /*1: Write a program to sort a number of strings using bubble sort. Input is a number of strings and
the output is the sorted list based on the length of strings.
For e.g.: If input is jyoti, sareeka, anisha, sangita, savita, suja
The output is suja, jyoti, anisha, savita, sareeka, sangita */
 #include <stdio.h>
 #include <string.h>
    void main()
    {
 
        char name[10][8], tname[10][8], temp[8];
        int i, j, n;
 
        printf("enter size: \n");
        scanf("%d", &n);
        printf("\nEnter names: ");
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
            for (j = i + 1; j < n; j++)
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
		printf("\nResult : ");
        for (i = 0; i < n; i++) 
            printf("%s   ", name[i]);
        
    }
