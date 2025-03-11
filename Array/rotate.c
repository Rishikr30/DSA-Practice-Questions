#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array by k steps
void rotateArray(int arr[], int size, int k) {
    k = k % size; // To handle cases where k > size

    // Step 1: Reverse the whole array
    reverse(arr, 0, size - 1);

    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse the remaining elements
    reverse(arr, k, size - 1);
}

int main() {
    int arr[5]; 
    int i, k;

    printf("Enter 5 different numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of steps to rotate (k): ");
    scanf("%d", &k);

    // Rotate the array by k steps
    rotateArray(arr, 5, k);

    printf("\nArray after Rotation by %d steps:", k);
    for (i = 0; i < 5; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}
