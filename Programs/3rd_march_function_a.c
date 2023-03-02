#include <stdio.h>

int avg(int b, int c){
    float a;
    // a=((float)b+(float)c)/2;
    a=(b+c)/2.0;
    printf("%f",a);
}

int main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    avg(a,b);
    return 0;
}