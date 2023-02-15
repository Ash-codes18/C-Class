#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("Enter a Number or a Character : ");
    scanf("%c",&a);
    if (isupper(a)){
        printf("%c is an Upper Case Character",a);
    }
    else if(islower(a)){
        printf("%c is an Lower Case Character",a);
    }
    else if(isdigit(a)){
        printf("%c is a Digit",a);
    }
    else{
        printf("%c is a Special Character",a);
    }
    return 0;
}