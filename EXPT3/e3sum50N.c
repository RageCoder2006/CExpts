// sum of first 50 natural numbers
#include <stdio.h>

int main() {
    int num, sum;
    num = 1;
    sum = 0;
    do {
        sum += num;
        num++;
    } while (num <= 50);
    printf("The sum of the first 50 natural numbers is: %d\n", sum);
}

/* using for loop
for (num = 1; num <= 50; num++){
    sum = sum + num;
  }
  printf("The sum of the first 50 natural numbers is: %d\n", sum);
 */
