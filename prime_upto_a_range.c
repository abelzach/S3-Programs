#include<stdio.h>
int checkprime(int n)
{
    int i;
    int flag=1;
    for(i=2;i<=n/2;++i)
        if(n%i==0)
        {
            flag=0;
            break;
        }
    if(flag==0)
        return 1;
    else
        return 0;
}
void main()
{
    int n,i;
    printf("Enter the range upto which you want to find prime numbers: ");
    scanf("%d",&n);
    for(i=2;i<=n;++i)
    {
        if(checkprime(i)==0)
            printf("%d\t",i);
    }
}
