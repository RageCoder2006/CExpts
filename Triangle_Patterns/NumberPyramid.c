#include <stdio.h>

int main(){
  int num;
  printf("Enter number:");
  scanf("%d",&num);
  for (int i = 1; i <= num; i++) {
    for (int k = num-1; k >= i; k--) {
      printf(" ");
    }
    for (int j1 = 1; j1 < i; j1++) {
      printf("%d",j1);
    }
    for (int j2 = i; j2 >= 1; j2--) {
      printf("%d",j2);
    }
    printf("\n");
  }
}