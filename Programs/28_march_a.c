#include <stdio.h>

int main(){
    int arr[]={1,24,56,903,21,2,32,456,156,723,232,3};
    int a;
    printf("Enter the index you want to find the value for : ");
    scanf("%d",&a);
    if(a<=sizeof(arr)/4 && a>=0){
        printf("At index %d the element %d resides having value : %d",a,a+1,arr[a]);
    }
    else{
        printf("Array index out of bounds");
    }
    return 0;
}