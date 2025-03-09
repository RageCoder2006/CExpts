#include <stdio.h>

int main() {
    int target, i;
    printf("Enter Target: ");
    scanf("%d", &target);
    int arr[10] = {1, 2, 3, 0, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("%d is found at index %d\n", target, i);
            break;
        }
    }
    if (i == n) {
        printf("%d is not found\n", target);
    }
}
