#include <stdio.h>

int main(){
    int arr[]={12,34,5,78,2,67,22,9,24,88,23};
    int a;
    printf("The array consists of 11 elements.\n");
    printf("Enter the element no. you want to find : ");
    scanf("%d",&a);
    printf("Element %d in the array is : %d",a,arr[a-1]);
    return 0;
}