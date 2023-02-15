#include <stdio.h>

int main(){
    int a;
    printf("Enter the no. : ");
    scanf("%d",&a);
    if (a%5==0 || a%7==0){
        printf("%d is divisble by either 5 or 7",a);
    }
    else{
        printf("The given no. is not divisble by either 5 or 7");
    }
    return 0;
}