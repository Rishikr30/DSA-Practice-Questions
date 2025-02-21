#include<stdio.h>
int SmallestNum()
{
    int i, smallest,arr[5];
    printf("Enter 5 diff Numbers : \n");
    for ( i = 0; i< 5; i++){
        scanf("%d",&arr[i]);
    }
    smallest = arr[0];
    for ( i = 0; i < 5; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
        
    }
    printf("Smallest Number in the Array is : %d",smallest);
}
int main()
{
    SmallestNum();
    return 0;
}