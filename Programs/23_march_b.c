#include <stdio.h>

int main(){
    char c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the character %d of the array : ",i+1);
        scanf("%s",&c[i]);
    }
    for(int i=0;i<5;i++){
        // printf("%c",c[i]);
        printf("The address of %c element of the array is : %u\n",c[i],&c[i]);
    }

    
    return 0;
}