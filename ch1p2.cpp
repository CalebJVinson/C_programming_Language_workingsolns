/* Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above*/

#include <stdio.h>

int main(void)
{
  printf("Experiment to test a non-escape sequence character.\n");
  
  printf("Using c as escape sequence character: \c");

  return 0;
}  

/* Returns a warning that does not recognize the escape sequence \c */
