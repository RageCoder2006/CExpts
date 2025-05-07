#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char s[20];
  printf("Enter the string: ");
  scanf(" %[^\n]", s);

  int len = strlen(s);

  for (int i = 0; i < len; i++) {
    s[i] = tolower(s[i]);
  }

  int isPalindrome = 1;
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - i - 1]) {
      isPalindrome = 0;
      break;
    }
  }

  if (isPalindrome) {
    printf("Given String is a Palindrome\n");
  } else {
    printf("Given String is not Palindrome\n");
  }
}
