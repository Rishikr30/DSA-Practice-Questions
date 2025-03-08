#include<stdio.h>
int main()
{
    int arr[10],temp[10],i,j,k,count= 0;
    printf("Enter 10 diff number :");
    for (i =0; i<=10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=10;i++)
    {
        for(j=0;j<count;j++)
        {
            if(arr[i]==temp[j]){
                break;
            }
        }
        if(j==count){
            temp[count]=arr[i];
            count++;
        }
    }
    printf("After removing duplicate:\n");
    for(k=0;k<count;k++)
    {
        printf("%d",temp[k]);
    }
    printf("\n");
    return 0;
}