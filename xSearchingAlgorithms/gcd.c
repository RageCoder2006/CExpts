#include <stdio.h>

int gcd(int a, int b);

int main(){
  int n1, n2, res;
  printf("Enter number 1 and 2: ");
  scanf("%d %d", &n1, &n2);
  res = gcd(n1, n2);
  printf("GCD of %d and %d is %d", n1, n2, res);
  return 0;
}
// Euclidean Algorithm to find GCD
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}