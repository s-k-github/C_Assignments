#include <stdio.h>
#include <stdlib.h>

int main()
{
   //count to count file length
   int count=0,i=0;
   //declare pointers for source to destination. 
   FILE *fptr;
   FILE *fptr1;
   FILE *fptr2;

	//point to source and destination files
	//2 pointers because one to count file length and to transfer content
   fptr = fopen("E:\\program.txt","r");
   fptr1 = fopen("E:\\program.txt","r");
   fptr2 = fopen("E:\\program2.txt","r+");

	//if file does not exist
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   
   //find file length
   while((fgetc(fptr1))!=EOF) 
   		count++;

	printf("\nWord count in input file : %d\n",count);
	printf("\nFile content : ");
	for(i = 0; i<count; i++)
	{
    	char ch[10];
    	/*char *fgets(char *str, int n, FILE *stream)
		* str : Pointer to an array of chars where the string read is copied.
		* n : Maximum number of characters to be copied into str 
		* (including the terminating null-character).
		* *stream : Pointer to a FILE object that identifies an input stream.
		* stdin can be used as argument to read from the standard input.
		* 
		* returns : the function returns str*/
    	//fetch character by character from file pointed by fptr
    	//fgets() will read only 5 character and store it in array.
    	//2 means read word by word
		fgets(ch, 2, fptr);
			
		//print file content on console
		printf("%s", ch);
		//transfer content of source file to destination file character by character
		fputs(ch, fptr2);
	}
	printf("\n\nData transfer completed! Thank you for using our program");
	//close pointers
   fclose(fptr);
   fclose(fptr2);

   return 0;
}
