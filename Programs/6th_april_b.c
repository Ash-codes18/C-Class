#include <stdio.h>

struct car
{
    char *name;
    int seats;
    float price;
};



int main(){
    struct car mycar;
    mycar.name="Ranu";
    mycar.seats=5;
    mycar.price=800000.005;


    printf("Name of the car : %s\n",mycar.name);
    printf("No. of the seats in the car : %d\n",mycar.seats);
    printf("The price of the car is %f",mycar.price);
    
    return 0;
}