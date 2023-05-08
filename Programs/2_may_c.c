#include <stdio.h>

int main(){
    char s[]="This is";
    char ss[]=" a string";
    char sss[sizeof(s)+sizeof(ss)];
    int i=0;
    int n=0;

    while(s[i]!='\0'){
        sss[i]=s[i];
        i++;
    }
    while(ss[n]!='\0'){
        sss[i]=ss[n];
        i++;
        n++;
    }

    puts(sss);


    return 0;
}