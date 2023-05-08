#include <stdio.h>
#include <string.h>

int main(){
    char s[]="This is a string";
    int i=0;
    int n=0;
    int sz=strlen(s);

    char rev[sz+1];

    while(i<sz){
        rev[sz-i-1]=s[i];
        i++;
    }
    rev[sz]='\0';

    printf("The reverse of the string is : ");
    puts(rev);

    return 0;
}
