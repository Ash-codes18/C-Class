#include <stdio.h>

int main(){
    int a;
    printf("Enter the no. : ");
    scanf("%d",&a);
    if (a%2==0 && a%3==0){
        printf("%d is divisble by both 2 and 3",a);
    }
    else{
        printf("The given no. is not divisble by both 2 and 3");
    }
    return 0;
}