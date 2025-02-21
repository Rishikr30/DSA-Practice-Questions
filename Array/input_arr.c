#include<stdio.h>
int main()
{
    int i,arr[5];
    printf("Enter 5 diff Numbers :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You entered : \n");
    for(i=0;i<5;i++)
    {
        printf(" %d", arr[i]);
    }
    
    return 0;
}