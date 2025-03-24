#include <stdio.h>

int main() {
    char ch;
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // array input
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // display input
    printf("Input Array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // bubble sort
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // display output
    printf("Output Sorted Array in: \n[a] Ascending Order\n[b] Descending Order\n");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'A') {
        printf("Sorted array in ASCENDING ORDER: \n");
        for (int k = 0; k <= n - 1; k++) {
            printf("%d ", arr[k]);
        }
    }
    else if (ch == 'b' || ch == 'B') {
        printf("Sorted array in DESCENDING ORDER: \n");
        for (int k = n - 1; k >= 0; k--) {
            printf("%d ", arr[k]);
        }
    }
    else {
        printf("Not a Valid Choice! \n");
    }
}
