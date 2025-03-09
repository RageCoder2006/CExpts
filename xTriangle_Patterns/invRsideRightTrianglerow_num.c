#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        for (int k = i; k > 1; k--) {
            printf(" ");
        }
        for (int j = num; j >= i; j--) {
            printf("%d", i);
        }
        printf("\n");
    }
}
