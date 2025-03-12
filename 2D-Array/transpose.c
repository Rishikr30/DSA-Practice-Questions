#include<stdio.h>
int main()
{
    int r,c,i,j;
    
    printf("Enter number of Rows : ");
    scanf("%d",&r);
    printf("\nEnter number of Column : ");
    scanf("%d",&c);
    
    int matrix[r][c]; //r = row, c= column
    printf("\nEnter element of the matrix :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("Your entered Matrix is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("After transpose Matrix is :\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r ; j++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}