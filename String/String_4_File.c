#include <stdio.h>

int main(){
    FILE *fp;
    int ch;

    fp=fopen("File2.txt","w");

    while((ch=getchar())!=EOF)
        fputc(ch,fp);

    fclose(fp);

    fp=fopen("File1.txt","rb");

    fseek(fp,0L,SEEK_END);

    while(fseek(fp,-2L,SEEK_CUR)==0){
        ch=fgetc(fp);
        putchar(ch);
    }

    fclose(fp);

    return(0);
}
