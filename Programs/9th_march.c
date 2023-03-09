#include <stdio.h>

int natural(int a){
    if(a==1){
        return 1;
    }
    else{
        return a+natural(a-1);
    }
}

int main(){
    int n;
    printf("Enter the last natural no. : ");
    scanf("%d",&n);
    printf("The sum of first %d natural nos. is : %d",n,natural(n));
    return 0;
}