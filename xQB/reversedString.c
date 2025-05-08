#include <stdio.h>
#include <string.h>

void xstrrev(char* str);

int main(){
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  xstrrev(str);
}

void xstrrev(char* str){
  char *start = str;
  char *end = start + strlen(str) - 1;
  while(start < end){
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
  printf("%s", str);
}