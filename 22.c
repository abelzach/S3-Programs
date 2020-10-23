#include<stdio.h>
void main()
{
    char str,ch;
    printf("Enter the data : ");
    FILE *fp;
    fp=fopen("text.txt","w");
    while((str=getchar())!=EOF)
        putc(str,fp);
    fclose(fp);
    fp=fopen("text.txt","r");
    printf("The entered data is: \n");
    if(fp==NULL)
        {
            printf("Error opening file.");
        }
    else{
        while((ch=getc(fp))!=EOF)
        {
            printf("%c",ch);
        }
    }
    fclose(fp);
    printf("\nAppend data to the file: ");
    fp=fopen("text.txt","a");
    while((str=getchar())!=EOF)
        putc(str,fp);
    fclose(fp);
    printf("\nThe final data in the file is \n");
    fp=fopen("text.txt","r");
    while((ch=getc(fp))!=EOF)
        {
            printf("%c",ch);
        }
}
