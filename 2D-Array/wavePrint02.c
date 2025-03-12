#include <stdio.h>
int main()
{
    int n;

    printf("Enter number of Rows/Columns : ");
    scanf("%d", &n);

    int matrix[n][n]; // n*n = total element
    printf("\nEnter element of the matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Wave Print  :\n");
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = n-1; i >=0; i--)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        else
        {
            for (int i = 0; i<n; i++)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}