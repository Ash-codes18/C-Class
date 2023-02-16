//Program to check if a no. is palindrome or not

#include <stdio.h>

int main(){
    int a;
    int b=0;
    printf("Enter the no. to be checked : ");
    scanf("%d",&a);
    int z=a;
    if (a<10){
        printf("Single digit numbers are not palindromes\n");
    }
    else{
        while(a>0){
            int i=a%10;
            b=(b*10)+i;
            a=a/10;
        }
        // printf("%d",b);
    }
  if(z==b){
    printf("%d is a palindrome",z);
}
else{
    printf("%d is not a palindrome",z);
}
    return 0;
}