#include<stdio.h>
int LargestNum()
{
    int i,largest,arr[5];
    printf("Enter 5 diff Nummbers : \n");
    for ( i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    for ( i = 0; i < 5; i++){
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
        
    }
    printf("Largest Number in the Array is : %d",largest);
}
int main()
{
    LargestNum();
    return 0;
}