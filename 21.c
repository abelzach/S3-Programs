#include<stdio.h>
int sumarray(int *ptr,int n)
{
    int sum=0,i;
    for (i=0;i<n;i++)
    {
        sum+=*(ptr+i);
    }
    return sum;
}
void main()
{
    int arr[20],sum,n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(int i=0;i<n;++i)
        scanf("%d",&arr[i]);
    sum=sumarray(&arr,n);
    printf("Array elements sum = %d",sum);
}
