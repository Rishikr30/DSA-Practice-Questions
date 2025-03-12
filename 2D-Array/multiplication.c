#include<stdio.h>
int main()
{
    //first matrix order
    int m;
    printf("Enter the no. of Rows of First matrix :");
    scanf("%d",&m);

     int n;
     printf("\nEnter the no. of Columns of First matrix :");
     scanf("%d",&n);

    //Input elements of first matrix
    int matrix1[m][n];
    printf("\nEnter the elements of first matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
        
    }
    
    //second matrix order
    int p;
    printf("\nEnter the no. of Rows of second matrix :");
    scanf("%d",&p);

    int q;
    printf("\nEnter the no. of Columns of second matrix :");
    scanf("%d",&q);

    //Input elements of second matrix
    int matrix2[p][q];
    printf("\nEnter the elements of second matrix :\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }   
    }

    //check the condition of multiplication
    if (n != p)
    {
        printf("\nThe Matrix cannot be multiplied");
    }else{
        //Multiplication
        int res[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;
            //i = row of matrix1
            //j = columns of matrix2
            for (int k = 0; k < n; k++) 
            {
                res[i][j] += matrix1[i][k]*matrix2[k][j];
            }
            
        }
        
    }
    //print
    printf("\nThe resultant matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    
    }
    
    return 0;
}