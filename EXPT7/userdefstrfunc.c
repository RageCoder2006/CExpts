#include <stdio.h>

int xstrlen(const char *str);
int xstrcmp(const char *s1, const char *s2);
char* xstrcpy(char *dest, char *src);

int main(){
  char a[20];
  printf("Enter a string: ");
  scanf("%[^\n]", &a);
  printf("The string length is: %d\n", xstrlen(a));
  char s1[20], s2[20];
  printf("Enter a string: ");
  scanf(" %[^\n]", &s1);
  printf("Enter a string: ");
  scanf(" %[^\n]", &s2);
  xstrcmp(s1,s2);
  printf("%s", xstrcpy(s2,s1));
}

int xstrlen(const char *str){
  int len = 0;
  while (str[len] != '\0'){
    len++;
  }
  return len;
}

int xstrcmp(const char *str1, const char *str2) {
  int len1 = xstrlen(str1);
  int len2 = xstrlen(str2);
  if (len1 != len2) {
    printf("Strings are not the same\n");
  }
  else if (len1 == len2) {
    for (int i = 0; i< len1; i++) {
      if (str1[i] != str2[i]) {
        printf("Strings are not the same\n");
        break;
      }
      else {
        printf("Strings are equal\n");
      }
    }
  }
}

char* xstrcpy(char *dest, char *src) {
  int len = xstrlen(src);
  for (int i = 0; i < len; i++) {
    dest[i] = src[i];
  }
  dest[len] = '\0';
  return dest;
}