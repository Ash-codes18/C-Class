//This program will run since the switch contains an integer value 

#include <stdio.h>

int main(){
    int ch;
    printf("Enter a value between 1 to 5 : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("You have given the input as :\n1");
        break;
    case 2:
        printf("You have given the input as :\n2");
        break;   
    case 3:
        printf("You have given the input as :\n3");
        break; 
    case 4:
        printf("You have given the input as :\n4");
        break; 
    case 5:
        printf("You have given the input as :\n5");
        break; 
    default:
        printf("The given input is not between 1 and 5");
        break;
    }
    return 0;
}