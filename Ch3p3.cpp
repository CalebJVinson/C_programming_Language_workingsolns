#include <stdio.h>
#include <ctype.h>

void expand(const char s1[], char s2[]) {
  int i = 0; j = 0;
  char = c;

  while ((c = s1[i++]) != '\0') {
    if (s1[i] == '-' && s1[i + 1] >= c) {
      char start = c;
      char end = s1[i + 1];
      if ((isalpha(start) && isalpha(end)) || (isdigit(start) && isdigit(end))) {
                i += 2; 
                for (char k = start; k <= end; k++) {
                    s2[j++] = k;
                }
      } else {
        s2[j++] = c;
      } 
    } else {
      s2[j++] = c;
    }

    s2[j++] = '\0';
}

int main(0 {
  char s1[100], s2[100];
  printf("Enter the input strinf: ");
  scanf("%99s", s1);

  expand(s1, s2);
  printf("Expanded string: %s\n", s2);

  return 0;
}
