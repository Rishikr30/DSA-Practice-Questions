#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter number of Rows/Columns : ");
    scanf("%d",&n);
    
    int matrix[n][n]; // n*n = total element
    printf("\nEnter element of the matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("Your entered Matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    //transpose
    printf("After transpose Matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    
    //rotate
    for (int i = 0; i < n; i++)
    {
        int j =0;
        int k= n-1;
        while (j<k)
        {
            int temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                j++;
                k--;
        }
        
    }
    printf("\n");
    printf("Matrix after rotation\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}