#include <stdio.h>

int search(int arr[],int n,int a){
    int loc;
    for(int i=0;i<n;i++){
        if(a==arr[i]){
            loc=i;
            break;
        }
        else{
            loc=-1;
        }   
    }
    if(loc!=-1){
        printf("The location of the element is : %d",loc+1);
    }
    else{
        printf("Element is not present in the array");
    }
}


int main(){
    int n,a;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to find the index of : ");
    scanf("%d",&a);
    search(arr,n,a);

    return 0;
}