#include<stdio.h>
int main()
{
    int i,arr[5];
    printf("Enter 5 diff number :");
    for ( i = 0; i <= 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray in reverse order :");
    for ( i = 4; i >=0 ; i--)
    {
        printf(" %d",arr[i]);
    }
    
    
    return 0;
}