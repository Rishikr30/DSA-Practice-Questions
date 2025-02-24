#include<stdio.h>
int main()
{
    char str[10];
    int i = 0;
    printf("Enter a string : ");
    gets(str);
    while (str[i] != '\0')
    {
        if(str[i]>= 97 && str[i]<=122)
        {
            str[i] = str[i] - 32;
            i++;
        }
    }
    printf("\nThe string in Upper case is : ");
    puts(str);
    return 0;
}