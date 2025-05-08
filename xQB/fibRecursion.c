#include <stdio.h>

int fib(int term);

int main(){
  int f = fib(7);
  printf("upto: %d\n", f);
}

int fib(int term){
  int fst = 0, snd = 1;
  if (term == 1){
    return 0;
  }
  else if (term == 2){
    return 1;
  }
  else{
    return fib(term -1) + fib(term -2);
  }

}