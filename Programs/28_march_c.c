#include <stdio.h>

int main(){

//declarations

    printf("Enter the dimensions for the 2-d arrays below \n\n");
    int a,b;
    printf("Enter the number of columns in the arrays : ");
    scanf("%d",&a);
    printf("Enter the number of rows in the arrays : ");
    scanf("%d",&b);
    int arr[a][b];
    int array[a][b];
    int sum[a][b];

//Array 1 inputs

printf("Input the elements of the array 1\n\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the element %d of column %d : ",j+1,i+1);
            scanf("%d",&arr[i][j]);
        }
    }


//Array 2 inputs 

printf("\nInput the elements of the array 2\n\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the element %d of column %d : ",j+1,i+1);
            scanf("%d",&array[i][j]);
        }
    }

//Taking Sum
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sum[i][j]=arr[i][j]+array[i][j];
        }
    }

printf("The summed elements of the 2 arrays are :");
for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("the Element %d of column %d is : %d \n",j+1,i+1,sum[i][j]);
        }
    }
    return 0;
}