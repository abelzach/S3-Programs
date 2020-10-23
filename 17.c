/*Abel Simon Zachariah
  S2 CSE ALPHA
  Roll no.5
*/
#include<stdio.h>
#include<string.h>
void rev(char a[20])
{
    int i,j,n;
    char b[20];
    n=strlen(a);
    --n;
    for(i=0,j=n;j>=0;++i,--j)
        b[i]=a[j];
    b[i]='\0';
    printf("\nReversed word: %s",b);
}
void main()
{
    char w[20];
    printf("Enter word to be reversed :");
    gets(w);
    rev(w);
}
