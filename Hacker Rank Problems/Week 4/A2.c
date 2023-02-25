#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,r,k,count=0;
    scanf("%d %d %d",&l,&r,&k);
    for(l;l<=r;l++){
        if(l%k==0){
            count+=1;
        }
    }
printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
