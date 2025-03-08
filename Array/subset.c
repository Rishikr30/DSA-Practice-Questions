#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],i,j;
    printf("Enter 5 elements of first Set: \n");
    for ( i =0; i<=4; i++){
        scanf("%d",&arr1[i]);
    }
    printf("{ ");
    for( i=0; i<=4; i++){
        printf("%d,",arr1[i]);
    }
    printf(" }\n");

    printf("Enter 5 elements of second Set: \n");
    for ( j =0; j<=4; j++){
        scanf("%d",&arr2[j]);
    }
    printf("{ ");
    for( j=0; j<=4; j++){
        printf("%d,",arr2[j]);
    }
    printf(" }\n");


//for finding subset of the given set
    printf("Subset of The given sets :\n");
    printf("{ ");
    for( i=0; i<=4; i++){
        for( j=0; j<=4; j++){
            printf("(%d,%d)",arr1[i],arr2[j]);
        }

    }
    printf(" }");

    return 0;
}