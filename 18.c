/* Abel Simon Zachariah
   S2 CSE ALPHA
   Roll no.5
*/
#include<stdio.h>
void display(int a[10][10],int m, int n)
{
    int i,j;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void read(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        scanf("%d",&a[i][j]);
}
void sum(int a[10][10],int b[10][10],int m,int n,int p,int q)
{
    int c[10][10],i,j;
    if((m=p)&&(n=q))
    {
        for(i=0;i<m;++i)
            for(j=0;j<n;++j)
            c[i][j]=a[i][j]+b[i][j];
    }
    else{
        printf("The matrices are not equal and cannot be added");
    }
    display(c,m,n);
}
void product(int a[10][10],int b[10][10],int m,int n,int p,int q)
{
    int i,j,k,c[10][10];
    if(n=p)
    {
        for(i=0;i<m;++i){
            for(j=0;j<q;++j){
                c[i][j]=0;
                for(k=0;k<n;++k)
                    c[i][j]+=(a[i][k]*b[k][j]);
            }

        }
    }
    display(c,m,n);
}
void transpose(int a[10][10],int m,int n)
{
    int i,j,c[10][10];
    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
            c[i][j]=a[j][i];
    display(c,m,n);
}

void main()
{
    int ch,a[10][10],b[10][10],m,n,p,q;
    char cho;
    printf("Enter the size of first matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the values of first matrix ");
    read(a,m,n);
    printf("Enter the size of second matrix: ");
    scanf("%d%d",&p,&q);
    printf("Enter the values of second matrix ");
    read(b,p,q);
    do{
        printf("\nMENU");
        printf("\n1)Sum of matrices\n2)Product of matrices\n3)Transpose");
        printf("\nEnter choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:sum(a,b,m,n,p,q);
                    break;
            case 2:product(a,b,m,n,p,q);
                    break;
            case 3:printf("First matrix\n");
                    transpose(a,m,n);
                    printf("\n Second matrix\n");
                    transpose(b,p,q);
                    break;
            default: printf("\nEnter a valid choice ");

        }
        printf("Do you want to continue?(y/n");
        scanf("%c",&cho);
    }while(cho=='y');
}
