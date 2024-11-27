# include <stdio.h>

int main(void) {
  char ch;

  printf("Press a key to check : ");

  printf("The value of the expression is: %d for the input %c.\n", (ch = getchar() != EOF, ch);

  return 0;
}
