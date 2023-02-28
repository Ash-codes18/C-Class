#include <stdio.h>

int main(){
    char c[30];
    printf("Enter a string : ");
    gets(c);
    printf("The entered string is : %s\n",c);
    puts(c);
    return 0;
}