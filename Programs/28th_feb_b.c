//Explicit conversion of data types

#include <stdio.h>

int main(){
    int x=10;
    char y='a';
    x=x+(int)y;
    float z=(float)x+1.0;
    printf("%d\n%f",x,z);
    return 0;
}