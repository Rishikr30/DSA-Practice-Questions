#include<stdio.h>
int main()
{
    int arr[10], i, even=0, odd=0;
    printf("Enter 10 different number including even and odd :\n");
    for( i = 0; i<= 9; i++)
    {
       scanf("%d",&arr[i]) ;
    }
    for( i = 0; i<=9 ; i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }else{
            odd++;
        }
        
    }
    printf("Number of Even number : %d\n",even);
    printf("Number of Odd number : %d\n",odd);
    return 0;
}