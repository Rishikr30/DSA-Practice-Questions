#include<stdio.h>
int main()
{
    int arr[10],i, sumEven = 0,sumOdd = 0;
    printf("\nEnter 10 diff number including even and odd numbers :");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if (arr[i]%2==0)
        {   
            sumEven = sumEven + arr[i];
        }else {
            sumOdd = sumOdd + arr[i];
        }
        
    }
    printf("\nSum of Even Numbers : %d", sumEven);
    printf("\nSum of Odd Numbers : %d", sumOdd);
    
    return 0;
}