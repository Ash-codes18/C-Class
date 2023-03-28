#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows, &cols);
    

    int array1[rows][cols], transpose[cols][rows];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Transpose matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element %d of the column %d is : %d\n",j+1,i+1,array1[j][i]);
        }
    }

}