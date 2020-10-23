#include<stdio.h>
int rec(int n)
{
   if(n==0)
      return 1;
   else
      return(n*rec(n-1));
}
int nrec(int m)
{
    int f=1,i;
    for(i=1;i<=m;++i)
        f*=i;
    return f;
}
void main()
{
    int N,a,b;
    printf("Enter a number: ");
    scanf("%d",&N);
    a=rec(N);
    printf("\nFactorial using recursive function : %d",a);
    b=nrec(N);
    printf("\nFactorial using non recursive function : %d",b);
}
