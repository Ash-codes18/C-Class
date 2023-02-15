//Function to calculate the power given no.
//Using size of function

#include <stdio.h>
#include <math.h>

int fun(int a, int b);

int main(){
    int x,y;
    printf("Enter the no. :");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&y);
    printf("The value of %d to the power %d is : %d",x,y,fun(x,y));
    printf("\nThe size of this function is %d",sizeof(fun));
    return 0;
}

int fun(int a, int b){
    int z= pow(a,b);
    return z;
}