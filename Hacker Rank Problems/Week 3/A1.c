#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int L,N,w,h;
    scanf("%d",&L);
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf("%d %d",&w,&h);
        if(w<L || h<L){
            printf("UPLOAD ANOTHER\n");
        }
        else if (w==h){
            printf("ACCEPTED\n");
        }
        else{
            printf("CROP IT\n");
        }
    }
    return 0;
}
