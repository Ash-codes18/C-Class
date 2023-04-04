#include <stdio.h>

int asc(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
}


int desc(int arr[],int n){
      for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
}



int main(){
    int n;
    printf("Enter the no. of elements in the array : ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d of the array : ",i+1);
        scanf("%d",&arr[i]);
    }

    asc(arr,n);
    printf("\n");
    printf("The array sorted in ascending order is :\n");
    printf("{");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("}");
    printf("\n");


    desc(arr,n);
    printf("The array sorted in descending order is :\n");
    printf("{");

for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("}");
    printf("\n");

    return 0;
}