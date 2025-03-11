#include<stdio.h>
int secondLargest()
{
    int i,arr[5];
    int largest = -1;
    int sec_largest = -1;
    printf("Enter 5 diff Nummbers : \n");
    for ( i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 5; i++){
        if (arr[i]>largest)
        {
            largest = arr[i];
        } 
    }
    for ( i = 0; i < 5; i++){
        if (arr[i]>sec_largest && arr[i] != largest)
        {
            sec_largest = arr[i];
        } 
    }

    printf("Largest Number in the Array is : %d",sec_largest);
}
int main()
{
    secondLargest();   
    return 0;
}