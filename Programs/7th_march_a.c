#include <stdio.h>

int fib(int a){
    if (a==1 || a==0){
        return 1;
    }
    else{
        return fib(a-1)+fib(a-2);
    }
}


int main(){
    int a;
    printf("Enter the nth term of the fibonacci series : ");
    scanf("%d",&a);
    printf("%d",fib(a));
    return 0;
}
