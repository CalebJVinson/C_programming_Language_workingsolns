#include <stdio.h>

char lower(char);

int main(void) {
  char a[] = "WelCOMe MY name IS cal", ch;
  int r = 0;

  while(a[r] != '\0') {
    ch = lower(a[r]);
    printf("Lower case letter of  '%c' is '%c'.\n", a[r], ch);
    r++;
  }
  return 0;
}

char lower(char z) {
  return z>'A' && z<= 'Z' ? z + 'a' - 'A' :z;
}
