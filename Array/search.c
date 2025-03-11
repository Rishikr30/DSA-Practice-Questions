#include<stdio.h>
int main()
{
    int arr[5],x,i;
    printf("Enter 5 different numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d",&x);

    for ( i = 0; i < 5; i++)
    {
        if (arr[i]==x){
            printf("%d is present in the array at index %d",x,i);
            break;
        }
    }
    
    return 0;
}