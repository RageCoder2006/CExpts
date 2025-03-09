#include <stdio.h>

int main() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int term = 65;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", term);
            term++;
        }
        printf("\n");
    }
}
