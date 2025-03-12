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
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}