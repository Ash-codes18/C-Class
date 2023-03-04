#include <stdio.h>

int eo(int a){
    if(a%2==0){
        printf("%d is Even",a);
    }
    else{
        printf("%d is Odd",a);
    }
}

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    eo(a);
    return 0;
}