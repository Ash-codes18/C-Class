#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = (int*)malloc(30*sizeof(int));

    for(int i=0;i<5;i++){
        printf("Enter element %d of the array : ",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<5;i++){
        printf("Element %d of the array is : %d\n",i+1,ptr[i]);
    }
    
    free(ptr);

    return 0;
}