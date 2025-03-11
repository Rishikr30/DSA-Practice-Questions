#include<stdio.h>
int reverse(){
    int arr[5];
    int i,j;
    printf("Enter 5 diff number :\n");
    for ( i = 0; i <= 4; i++)
    {
        scanf("%d",&arr[i]);
    }

    i = 0;
    j = 4;
    while (i<j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
        i++;
        j--;
    }
    
    printf("\nArray in reverse order :");
    for ( i = 0; i <=4 ; i++)
    {
        printf(" %d",arr[i]);
    }
     
}

int main()
{
    reverse();
    return 0;
}