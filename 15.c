/*Abel Simon Zachariah
  S2 CSE ALPHA
  Roll no.5
*/
#include<stdio.h>
#define C_SIZE 50
union address
{
    char name[C_SIZE];
    char housename[C_SIZE];
    char cityname[C_SIZE];
    char state[C_SIZE];
    char pin[C_SIZE];
};
void main(){
    union address p;
    printf("Enter the name of the person: ");
    scanf("%s",p.name);
    printf("\nEnter the House name: ");
    scanf("%s",p.housename);
    printf("\nEnter the State: ");
    scanf("%s",p.state);
    printf("\nEnter the City name: ");
    scanf("%s",p.cityname);
    printf("\nEnter the pincode: ");
    scanf("%s",p.pin);
    printf("\nName of the person is : %s",p.name);
    printf("\nHouseame : %s",p.housename);
    printf("\nCityname : %s",p.cityname);
    printf("\nState : %s",p.state);
    printf("\nPincode is : %s",p.pin);
}
