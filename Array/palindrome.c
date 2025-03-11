#include <stdio.h>

void checkPalindrome() {
    int arr[5];
    int i, j, isPalindrome = 1;  // Assume the array is a palindrome initially

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is a palindrome
    i = 0;
    j = 4;
    
    while (i < j) {
        if (arr[i] != arr[j]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        i++;
        j--;
    }

    // Print result
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is NOT a palindrome.\n");
    }
}

int main() {
    checkPalindrome();
    return 0;
}
