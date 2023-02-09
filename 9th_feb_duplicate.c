//Will show duplicate value error since a has the ascii value 97 which is also equal to the integer value

#include <stdio.h>

int main(){
    int x=97;
    switch (x)
    {
    case 'a':
        printf("yes");
        break;
    case 97 : //duplicate value
        printf("No");
        break;
    default:
        printf("IDK!");
        break;
    }
    return 0;
}