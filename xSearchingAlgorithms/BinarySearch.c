#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target, low, mid, high;

    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    low = 0;
    high = sizeof(arr) / sizeof(arr[0]) - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (target == arr[mid]) {
            printf("Element found at index %d\n", mid);
            return 0;
        } else if (target < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("Element not found\n");
    return 0;
}
