// sum of first 50 natural numbers
#include <stdio.h>

int main(){
  int num,sum;
  sum = 0;
  for (num = 1; num <= 50; num++){
    sum = sum + num;
  }
  printf("The sum of the first 50 natural numbers is: %d\n", sum);
}