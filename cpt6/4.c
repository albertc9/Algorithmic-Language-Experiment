#include <stdio.h>

void insertSorted(int arr[], int n, int num) {
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = num;
}

int main() {
    int arr[100] = {1, 3, 5, 7, 9}; // Example sorted array
    int n = 5; // Number of elements in the array
    int num;

    printf("Enter a number to insert: ");
    scanf("%d", &num);

    insertSorted(arr, n, num);
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}