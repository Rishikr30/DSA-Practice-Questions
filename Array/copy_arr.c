#include<stdio.h>
int copy_arr()
{
    int givenArray[5], newArray[5],size,i;
    printf("Enter the 5 diff number in source array:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&givenArray[i]);
    }
    printf("Your Given Array is : ");
    for ( i = 0; i <=4; i++)
    {
        printf("%d,",givenArray[i]);
    }

    //copy array elements into another array
    for ( i = 0; i <=4; i++)
    {
        newArray[i] = givenArray[i];
    }
    
    //output the newArray
    printf("\nNew Copied Array is :");
    for(i=0;i<=4;i++){
        printf("%d,",newArray[i]);
    }
    
}

int main()
{
    return copy_arr();
}