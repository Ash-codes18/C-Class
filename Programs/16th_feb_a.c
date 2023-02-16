//Trying palindrome through for loop

#include <stdio.h>

int main(){
    int a,i;
    int b=0;
    printf("Enter the no. to be checked : ");
    scanf("%d",&a);
    int z=a;
    for(;a!=0;a/=10){
        i=a%10;
        b=(b*10)+i;
        // a=a/10;
    }
    if(z==b){
        printf("%d is a palindrome",z);
    }
    else{
        printf("%d is not a palindrome",z);
    }
    return 0;
}