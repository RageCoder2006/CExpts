#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of rows:");
    scanf("%d", &num);
    int term = 64;
    for (int i = num; i >= 0; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%c", term + j);
        }
        printf("\n");
    }
}
