#include<stdio.h>
int ascendingOrder()
{
    int i,k,temp,arr[5];
    printf("Enter 5 diff number : \n");
    for ( i = 0; i< 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i=0; i<5; i++)
    {
        for( k=i+1; k<5; k++)
        {
            if (arr[i]>arr[k])
            {
                temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
            
        }
    }
    for ( i = 0; i < 5; i++)
    {
        printf(" %d,",arr[i]);
    }
    
}
int main()
{
    ascendingOrder();
    return 0;
}