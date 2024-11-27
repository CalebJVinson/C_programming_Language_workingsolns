#include <stdio.h>

int main(void) {
  float ft, cel;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius\tFahr\n");
  printf("-------\t-------\n")';
  cel = lower;
  while (cel <= upper)
    {
      ft = cel * (9.0 / 5.0) + 32.0;
      printf("%3.0f\t%6.1f\n", cel, ft);
      cel = cel + step;
    }
  getchar();
  return 0;
}
