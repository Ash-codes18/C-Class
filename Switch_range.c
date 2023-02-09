#include <stdio.h>

int main(){
    int a;
    printf("Enter the overall marks obtained : ");
    scanf("%d",&a);
    switch (a)
    {
    case 90 ... 100:
        printf("You have obtained O grade!");
        break;
    case 80 ... 89:
    printf("You have obtained A+ grade!");
        break;
    case 70 ... 79:
    printf("You have obtained A grade!");
        break;
    case 60 ... 69:
    printf("You have obtained B+ grade!");
        break;
    case 50 ... 59:
    printf("You have obtained B grade!");
        break;
    case 40 ... 49:
    printf("You have obtained C+ grade!");
        break;
    default:
    printf("You have failed!");
        break;
    }
    return 0;
}