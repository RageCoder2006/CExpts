#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //top
    for (int i = 0; i < num; i++) {
        //quad 2
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        //spaces
        for (int k = i; k < num - 1; k++) {
            printf(" ");
        }
        for (int k1 = i; k1 <= num - 2; k1++) {
            printf(" ");
        }
        //quad 1
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    //bottom
    for (int i = num; i >= 1; i--) {
        //quad 3
        for (int j = i; j >= 1; j--) {
            printf("*");
        }
        //spaces
        for (int k = i; k <= num - 1; k++) {
            printf(" ");
        }
        for (int k1 = i; k1 <= num - 1; k1++) {
            printf(" ");
        }
        //quad 4
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
