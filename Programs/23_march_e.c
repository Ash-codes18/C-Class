#include <stdio.h>

int main(){
    int arr[10];
    int odd=0,even=0;
    for (int i = 0; i <10; i++)
    {   
        printf("Enter element %d of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("The no. of even elements in the array are : %d\n",even);
    printf("The no. of odd elements in the array are : %d",odd);
    
    
    return 0;
}