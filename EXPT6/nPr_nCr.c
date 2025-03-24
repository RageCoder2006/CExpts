// nPr = n!/(n-r)!
// nCr - nPR/r!

#include <stdio.h>

int fact(int n);

int main(){
  int n, r;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter r: ");
  scanf("%d", &r);
  int nPr = fact(n)/fact(n-r);
  printf("The nPr is : %d\n", nPr);
  int nCr = nPr/fact(r);
  printf("The nCr is : %d\n", nCr);
}

int fact(int n){
  int f = 1;
  if (n == 0){
    return 1;
  }
  else{
    for (int i = 1; i <= n; i++){
      f = f * i;
    }
    return f;
  }

}