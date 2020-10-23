/* Abel Simon Zachariah
   S2 CSE ALPHA
   Roll no.5
   */
#include<stdio.h>
struct employee
{
char name[20];
int id;
float sal;
};
void main()
{
    int i,n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    struct employee a[100];
    for(i=0;i<n;++i)
    {
        printf("\nEnter the name of employee %d: ",i+1);
        scanf("%s",&a[i].name);
        printf("\nEnter the ID  of employee %d: ",i+1);
        scanf("%d",&a[i].id);
        printf("\nEnter the salary of employee %d: ",i+1);
        scanf("%f",&a[i].sal);
    }
    printf("\nDisplaying the details of %d employees: ",n);
    for(i=0;i<n;++i)
    {
        printf("\nName of employee %d: %s",i+1,a[i].name);
        printf("\nID of employee %d: %d",i+1,a[i].id);
        printf("\nSalary of employee %d: %f",i+1,a[i].sal);
    }

}
