#include <stdio.h>
#include <string.h>

int main(){
    char s[]="This is a string";
    char ss[]="This is a string";
    
int checker =0;
    if(sizeof(s)==sizeof(ss)){
    for(int i=0;i<sizeof(s);i++){
        if(s[i]!=ss[i]){
            checker=0;
            break;
        }
        else{
            checker=1;
        }
    }
}    

else{
    printf("The strings are not equal");
}
if(checker==0){
    printf("The strings are not equal");
}
else if (checker==1){
    printf("The strings are equal");
}
    return 0;
}