#include <stdio.h>

int htoi(char[]);

int main(void) {
  char text[10];
  int a;

  printf("Enter hexa decimal string: ");
  scanf("%s", text);
  a = htoi(text);

  printf("\nInteger value for given hexa is: %d \n", a);
  return 0;
}

int htoi(char line[]) {
  int digit, i = 0, h, x;
  if (line[i] == '0'){
    ++i;
    if(line[i] == 'x' || line[i] == 'x') {
      i++;
    }
    x = 0;
    h = 1;
    for(h==1; ++i){
      if(line[i] >= '0' && line[i] <= '9') {
        digit = line[i] - '0';
      } else if(line[i] >= 'a' && line[i] <= 'f') {
        digit = line[i] - 'a' + 10;
      } else if(line[i] >= 'A' && line[i] <= 'F') {
        digit = line[i] - 'A' + 10;
      } else {
        h = 0;
      }
      if(h == 1) {
        x = 16 * x + digit;
      }
    }
  }
  return x;
}
