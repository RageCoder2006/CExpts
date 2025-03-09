// displaying a star pyramid
#include <stdio.h>

int main() {
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    int l = 0;
    for (int i = 1; i <= num; i++) {
        for (int j = num; j >= i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i + l; k++) {
            printf("*");
        }
        printf("\n");
        l += 1;
    }
    l = num - 2;
    for (int i = num - 1; i >= 1; i--) {
        for (int j = num; j >= i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i + l; k++) {
            printf("*");
        }
        printf("\n");
        l -= 1;
    }
}
