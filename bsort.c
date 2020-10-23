#include<stdio.h>
void bsort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n;++i)
for(j=0;j<n-1-i;++j)
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
void main()
{
int a[10],n,i;
printf("Enter number of elements");
scanf("%d",&n);
for(i=0;i<n;++i)
    scanf("%d",&a[i]);
bsort(a,n);
for(i=0;i<n;++i)
    printf("%d \t",a[i]);
}
