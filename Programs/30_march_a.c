//Pass by value

#include <stdio.h>

void pass_val(int ele){
    printf(" %d ",ele+1);
}

int main(){
    int arr[]={12,4,68,0,654,45,8};
    printf("Value of elements before passing though the function : ");
    for(int i=0;i<sizeof(arr)/4;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
    printf("Value of elements after passing through the function : ");
    for(int i=0;i<sizeof(arr)/4;i++){
        pass_val(arr[i]);
    }
    return 0;
}