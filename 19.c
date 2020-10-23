#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a,b,*p,*q,ch,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    p=&a;
    q=&b;
    printf("\nMENU\n1)ADD\n2)SWAP");
    printf("\nEnter choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:c=*p+*q;
                printf("Sum of %d and %d is %d",*p,*q,c);
                break;
        case 2:swap(p,q);
                printf("Swapped numbers are %d and %d",*p,*q);
                break;
        default:printf("Enter valid choice");
    }

}
