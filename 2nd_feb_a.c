#include <stdio.h>

int main(){
    int x,y,max;
    printf("Enter two nos. :");
    scanf("%d %d",&x,&y);
    max = x>y? x:y;
    printf("greater num is %d",max);
    return 0;
}   