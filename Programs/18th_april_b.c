#include <stdio.h>
#include <string.h>

int main(){
    char s[30]="Halua";
    printf("Length : %d\n",strlen(s));
    printf("Adding : %s",strcat(s," is"));
    
    return 0;
}