// cosine of an angle
#include <stdio.h>
#include <math.h>

int factorial(int n);

int main() {
    double angle, cosine, term;
    int num;

    printf("Enter angle: ");
    scanf("%lf", &angle);

    printf("Enter accuracy on scale of 1 to 10: ");
    scanf("%d", &num);

    angle = angle * M_PI / 180; // Convert degrees to radians

    cosine = 1; // First term of the series (cos(0) = 1)
    term = 1; // First term (x^0 / 0!)

    for (int i = 1; i <= num; i++) {
        term *= -1 * angle * angle / ((2 * i - 1) * (2 * i)); // Compute next term iteratively
        cosine += term;
    }

    printf("The cosine is %.10lf\n", cosine);
    return 0;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
