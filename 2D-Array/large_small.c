#include<stdio.h>
int main()
{
    int matrix[3][3],i,j, large, small;
    printf("Enter a 3*3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        printf("Enter %d %d element of matrix :",i,j);
        scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    large = matrix[0][0];
    small = matrix[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            if (matrix[i][j] > large)
            {
                large = matrix[i][j];
            }
            if (matrix[i][j] < small)
            {
                small = matrix[i][j];
            }
        }
    }
    int large_i = 0, large_j = 0, small_i = 0, small_j = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == large)
            {
                large_i = i;
                large_j = j;
            }
            if (matrix[i][j] == small)
            {
                small_i = i;
                small_j = j;
            }
        }
    }
    printf("Largest element in the matrix is %d at index [%d][%d]\n", large, large_i, large_j);
    printf("Smallest element in the matrix is %d at index [%d][%d]\n", small, small_i, small_j);
    return 0;
}