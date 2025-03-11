#include<stdio.h>
int main()
{
    int i,arr[10],sum10=0,sum=0;
    printf("Enter 9(1 to 10) numbers with one missing Numbers : \n");
    for ( i = 0; i < 9; i++){
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i <= 8; i++){
        sum = sum + arr[i];
    }
    for ( i = 0; i < 10; i++){
       sum10 = 10*(10+1)/2;
    }
    printf("Missing number is %d",sum10-sum);
    
    return 0;
}