#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //forward
    for (int i = 0; i < num; i++) {
        for (int k = num; k > i+1; k--) {
            printf(" ");
        }
        printf("*");
        if (i != 0) {
            for (int k1 = (2 * i) - 1; k1 >= 1; k1--) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    //reverse
    for (int i = 0; i < num-1; i++) {
        for (int k = 0; k < i+1; k++) {
            printf(" ");
        }
        printf("*");
        if (i != num-2) {
            for (int k1 = (2*(num - i)-5); k1 >= 1; k1--) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}
