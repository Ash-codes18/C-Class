#include <stdio.h>

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter Element %d of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
    }
    printf("The sum of the given array is : %d\n",sum);
    printf("The average of the given array is : %f",sum/10.0);

    return 0;
}