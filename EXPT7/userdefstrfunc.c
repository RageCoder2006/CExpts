#include <stdio.h>

int xstrlen(const char *str);

int main(){
  char a[20];
  printf("Enter a string: ");
  scanf("%[ ^\n]", &a);
  printf("The string length is: %d\n", xstrlen(a));
}

int xstrlen(const char *str){
  int len = 0;
  while (str[len] != '\0'){
    len++;
  }
  return len;
}