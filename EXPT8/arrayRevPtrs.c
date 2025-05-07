#include <stdio.h>

void ArrayRev(int n,int *arr) {
  int *start = arr;
  int *end = arr+(n-1);
  int temp;
  while (start < end) {
    temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter Element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  printf("Original Array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  ArrayRev(n, arr);
  printf("\nReversed Array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
