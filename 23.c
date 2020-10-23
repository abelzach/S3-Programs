#include<stdio.h>
#include<string.h>
void main()
{
    FILE *f;
	char file[20],ch;
	int w=0,l=0,c=0;
	printf("Enter the file name to read(Please associate the file type ie; text.txt) : ");
	gets(file);
	f=fopen(file,"r");
	if(f==NULL)
    {
        printf("Error opening file");
    }
    else
    {
        ch=fgetc(f);
        while(ch!=EOF)
        {
            if(ch==' ')
                w++;
            else
                if(ch=='\n')
                l++;
            else
                c++;
            ch=fgetc(f);
        }
    }
    fclose(f);
    printf("\nNumber of lines = %d \nNumber of words = %d \nNumber of characters = %d",l,w,c);
    f=fopen("output1.txt","w");
    fprintf(f,"\nNumber of lines = %d \nNumber of words = %d \nNumber of characters = %d",l,w,c);
    fclose(f);

}
