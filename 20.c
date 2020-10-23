#include<stdio.h>
void main()
{
    int i,*ptr,a[10],n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    ptr=a;
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;++i)
        scanf("%d",(ptr+i));
    printf("The elements of the array are: \n");
    for(i=0;i<n;++i)
        printf("%d\t",*(ptr+i));
}
