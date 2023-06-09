#include <stdio.h>

int countNegatives(int arr[], int size) {
    int i, count = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = { -1, 2, -3, 4, -5, 6, -7, 8, -9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = countNegatives(arr, size);
    printf("Number of negative numbers in the array: %d\n", count);
    return 0;
}

