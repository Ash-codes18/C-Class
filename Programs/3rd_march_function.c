#include <stdio.h>

int mul(int a, int b){
    int i=0;
    while(i<b){
        printf("%d\n",(i+1)*a);
        // return (i+1)*a;
        i++;
    }

}


int main(){
    int a,b;
    printf("Enter the no. you want the table of :");
    scanf("%d",&a);
    printf("Enter till where you want the multiples : ");
    scanf("%d",&b);
    mul(a,b);
    return 0;
}