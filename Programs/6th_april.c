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

int binsearch(int arr[],int n,int ele){
    int mid=n/2;
        if(arr[mid]>ele){
            for (int i = 0; i < mid; i++)
            {
                if(arr[i]==ele){

                }
            }
            
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
    int ele;
    printf("Enter the element you want to find the index of : ");
    scanf("%d",ele)
    asc(arr,n);
    binsearch(arr,n,ele);


    }