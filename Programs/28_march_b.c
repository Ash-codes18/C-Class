#include <stdio.h>

int main(){
    printf("Enter the dimensions for the 2-d array below \n\n");
    int a,b;
    printf("Enter the number of columns in the array : ");
    scanf("%d",&a);
    printf("Enter the number of rows in the array : ");
    scanf("%d",&b);
    int arr[a][b];

    // Taking inputs

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the element %d of column %d : ",j+1,i+1);
            scanf("%d",&arr[i][j]);
        }
    }

    // Output

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Element %d of the column %d is : \n",j+1,i+1,arr[i][j]);
        }
    }

    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         if (i==1){
    //             printf("Elements of the column 1 are : ");
    //             printf(" %d ",arr[i][j]);
    //         }
    //         if (i==2){
    //             printf("Elements of the column 2 are : ");
    //             printf(" %d ",arr[i][j]);
    //         }
    //         if (i==3){
    //             printf("Elements of the column 3 are : ");
    //             printf(" %d ",arr[i][j]);
    //         }
    //     }
    // }
    return 0;
}