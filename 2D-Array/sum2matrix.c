#include<stdio.h>
int main()
{
    int matrix1[3][3],matrix2[3][3],sumMatrix[3][3],i,j;

    printf("Enter first 3*3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        printf("Enter %d %d element of first matrix :",i,j);
        scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\n");

    printf("Enter second 3*3 matrix :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        printf("Enter %d %d element of second matrix :\n",i,j);
        scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
        
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            
        }
    }
    printf("\n");
    printf("Sum of Given matrices :\n");
    for ( i = 0; i < 3; i++)
    {
        for (  j = 0; j < 3; j++)
        {
            printf(" %d ",sumMatrix[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
}