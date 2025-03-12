#include<stdio.h>
int main()
{
    int r,c;
    
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

    printf("Spiral printing\n");

    int minR = 0;
    int maxR = r-1;
    int minC = 0;
    int maxC = c-1;
    int tne = r*c;
    int count = 0;

    while (count<tne)
    {
        //print minimum row
        for (int j = minC; j <= maxC && count<tne; j++)
        {
            printf("%d ",matrix[minR][j]);
            count++;
        }
        minR++;

        //print maximum column
        for (int i = minR; i <= maxR && count<tne; i++)
        {
            printf("%d ",matrix[i][maxC]);
            count++;
        }
        maxC--;

        //print maximum row
        for (int j = maxC; j >= minC && count<tne; j--)
        {
            printf("%d ",matrix[maxR][j]);
            count++;
        }
        maxR--;
        
        //print minimum column
        for (int i = maxR; i >= minR && count<tne; i--)
        {
            printf("%d ",matrix[i][minC]);
            count++;
        }
        minC++;
    }
    
    return 0;
}