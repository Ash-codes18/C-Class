#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    float b;
    printf("Enter a decimal : ");
    scanf("%d",&b);
    printf("%f\n",exp(a));
    printf("%f\n",floor(b));
    printf("%f\n",sqrt(4));
    printf("%d\n",abs(a));
    printf("%f\n",fabs(b));
    printf("%f\n",ceil(b));
    printf("%d\n",pow(a,2));
}