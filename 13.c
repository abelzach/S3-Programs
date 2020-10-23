/* Abel Simon Zachariah
   S2 CSE ALPHA
   Roll no.5
*/
#include<stdio.h>
#include<math.h>
struct Euclidean
{
    float x;
    float y;
    float z;
};
int distance(float a,float b,float c,float p,float q,float r){
    float v;
    int a1,b1,c1;
    a1=p-a;
    b1=q-b;
    c1=r-c;
    v=sqrt((a1*a1)+(b1*b1)+(c1*c1));
    return v;
}
void main(){
    float q,s,w;
    struct Euclidean a[4];
    printf("Enter the first point : \n");
    scanf("%f%f%f",&a[0].x,&a[0].y,&a[0].z);
    printf("Enter the second point : \n");
    scanf("%f%f%f",&a[1].x,&a[1].y,&a[1].z);
    printf("Enter the third point : \n");
    scanf("%f%f%f",&a[2].x,&a[2].y,&a[2].z);
    printf("Enter the fourth point : \n");
    scanf("%f%f%f",&a[3].x,&a[3].y,&a[3].z);
    q=distance(a[0].x,a[0].y,a[0].z,a[1].x,a[1].y,a[1].z);
    w=distance(a[2].x,a[2].y,a[2].z,a[3].x,a[3].y,a[3].z);
    printf("\nThe distance between first and second point is %f",q);
    printf("\nThe distance between third and fourth point is %f",w);
    s=q+w;
    printf("The sum of distances : %f",s);

}
