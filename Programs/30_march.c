//pass by reference

#include <stdio.h>

void val_change(int arr[]){
    arr[3]=65;
}

int main(){
    int arr[]={1,3,4,56,0,32,12};
    printf("Initial value of element 3 of the array : %d\n",arr[3]);
    val_change(arr);
    printf("Value of element 3 after passing through the function is : ");
    printf("%d",arr[3]);
    return 0;
}