// Floyd's Triangle
#include <stdio.h>

int main() {
    int num, term = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", term);
            term++;
        }
        printf("\n");
    }
}
