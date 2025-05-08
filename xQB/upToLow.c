#include <stdio.h>
#include <string.h>

int main(){
  char inp[100];
  printf(">>> ");
  scanf(" %[^\n]", inp);
  for (int i = 0; i < strlen(inp); i++) {
    if (inp[i] == ' ') {
      inp[i] = ' ';
    }
    else {
      inp[i] = inp[i] + 32;
    }
  }
  for (int i = 0; i < strlen(inp); i++) {
    printf("%c", inp[i]);
  }
}