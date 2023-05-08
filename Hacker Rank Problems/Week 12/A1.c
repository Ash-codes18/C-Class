#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }    
int z=n;
    for(int i=0;i<n;i++){
        printf("%d ",arr[z-1]);
        z--;
    }
    return 0;
}