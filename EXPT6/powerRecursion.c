#include <stdio.h>

int power(int x, int y);

void main() {
    int base, exp;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    int result = power(base, exp);
    printf("The result is: %d\n", result);
}

int power(int x, int y) {
    int res;
    if (y > 0) {
        res = x * power(x, y - 1);
    } else {
        res = 1;
    }
    return res;
}
