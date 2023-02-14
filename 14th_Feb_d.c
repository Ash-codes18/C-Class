#include <stdio.h>

int main(){
    int a;
    int b=1;
    printf("Enter the last Natural no. :");
    scanf("%d",&a);
    do{
        if(b%2==0){
        printf("%d\n",b);
        }
        b++;
    }while(b<=a);
    return 0;
}