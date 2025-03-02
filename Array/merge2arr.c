#include<stdio.h>
int main()
{
    int n1,n2,i,j;

    printf("Enter size of First Array : ");
    scanf("%d",&n1);
    int arr1[n1];

    printf("\nEnter %d Element in First Array : \n",n1);
    for( i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter size of Second Array : ");
    scanf("%d",&n2);
    int arr2[n2];

    printf("\nEnter %d Element in Second Array : \n",n2);
    for( i=0; i<n2; i++){
        scanf("%d",&arr2[i]);
    }

    int mergedSize = n1+n2;
    int mergedArr[mergedSize];

    for( i=0; i<n1; i++){
        mergedArr[i] = arr1[i];
        
    }
    for ( j = 0; j < n2; j++){
        mergedArr[i] = arr2[j];
        i++;
    }

    printf("\nNew Array after merging 2 Given array :\n");
    for ( i = 0; i <mergedSize; i++)
    {
        printf(" %d",mergedArr[i]);
    }
    

    return 0;
}