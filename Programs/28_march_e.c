#include <stdio.h>

int main(){
    
    //declarations

    printf("Enter the dimensions for the 2-d array below \n\n");
    int a,b;
    printf("Enter the number of columns in the array : ");
    scanf("%d",&a);
    printf("Enter the number of rows in the array : ");
    scanf("%d",&b);
    int arr[a][b];
    int ele;
    int count=0;

//Array inputs

printf("Input the elements of the array 1\n\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the element %d of column %d : ",j+1,i+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter the element to count the frequency for : ");
    scanf("%d",&ele);

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           if (arr[i][j] == ele) {
                count++;
            } 
        }
    }
printf("The frequency of %d is : %d",ele,count);
    return 0;
}