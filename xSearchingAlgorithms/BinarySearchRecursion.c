#include <stdio.h>

void binSearch(int arr[], int low, int high, int n);

int main() {
    int target;
    int arr[5] = {2, 9, 17, 22, 36};
    printf("Enter the element to be searched: ");
    scanf("%d", &target);
    binSearch(arr, 0, 4, target);
}

void binSearch(int arr[], int low, int high, int n) {
    if (low > high) {
        printf("Element not found\n");
        return;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == n) {
        printf("Element found at index %d\n", mid);
        return;
    } else if (arr[mid] < n) {
        binSearch(arr, mid + 1, high, n);
    } else {
        binSearch(arr, low, mid - 1, n);
    }
}
