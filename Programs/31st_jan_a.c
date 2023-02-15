#include <stdio.h>

int main(){
    int x=3;
    int y=x++;
    printf("%d %d\n",y,x);
    int a=3;
    float z= 5.5;
    char h= "ac";
    int b = ++a;
    printf("%d %d",a,b);
    printf("\nThe size of integer is : %d",sizeof(a));
    printf("\nThe size of float is : %d",sizeof(z));
    printf("\nThe size of char is : %d",sizeof(h));
    return 0;
}