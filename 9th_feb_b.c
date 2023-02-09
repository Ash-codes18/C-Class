//This program will not run since the switch does not contain an integer value 

#include <stdio.h>

int main(){
    double ch;
    printf("Enter a value between 1 to 2 : ");
    scanf("%lf",&ch);
    switch (ch)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;    
    default:
        break;
    }
    return 0;
}