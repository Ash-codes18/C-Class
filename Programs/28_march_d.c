#include <stdio.h>

// int main(){

//     //declarations

//      printf("Enter the dimensions for the 2-d arrays below \n\n");
//     int a,b;
//     printf("Enter the number of columns in the arrays : ");
//     scanf("%d",&a);
//     printf("Enter the number of rows in the arrays : ");
//     scanf("%d",&b);
//     int arr[a][b];
//     int array[a][b];
//     int mul[a][b];

//     //Array 1 inputs

// printf("Input the elements of the array 1\n\n");
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("Enter the element %d of column %d : ",j+1,i+1);
//             scanf("%d",&arr[i][j]);
//         }
//     }


// //Array 2 inputs 

// printf("\nInput the elements of the array 2\n\n");
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("Enter the element %d of column %d : ",j+1,i+1);
//             scanf("%d",&array[i][j]);
//         }
//     }

// //multiplying

// for(int i=0;i<a;)
//     return 0;
// }


#define ROWS 2
#define COLS 3

int main() {
int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
int matrix2[COLS][ROWS] = {{1, 2}, {3, 4}, {5, 6}};
int result[ROWS][ROWS];
int i, j, k;


for (i = 0; i < ROWS; i++) {
for (j = 0; j < ROWS; j++) {
result[i][j] = 0;
for (k = 0; k < COLS; k++) {
result[i][j] += matrix1[i][k] * matrix2[k][j];
}
}
}


for (i = 0; i < ROWS; i++) {
for (j = 0; j < ROWS; j++) {
printf("%d ", result[i][j]);
}
printf("\n");
}

return 0;
}

