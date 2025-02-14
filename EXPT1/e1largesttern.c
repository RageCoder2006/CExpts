// find largest of 3 numbers using ternary op
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the Three Numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    (a > b) ? (a > c ? printf("%f is the largest", a) : printf("%f is the largest", c)) : (b > c ? printf("%f is the largest", b) : printf("%f is the largest", c));

    return 0;
}