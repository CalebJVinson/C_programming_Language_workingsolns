/* Equivalent/Original Code: for(i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) */

#include <stdio.h>

int main(void) {
  int i, lim, c;
  i = 0;
  lim = 81;
  char text[81];
  printf("Enter Text:\n\n");
  while(i < (lim-1)){
    c = getchar();
    if (c == EOF){
      break;
    } else if (c=='\n') {
      break;
      text[i++] = c;
    }
    text[i] = '\0';
    printf("The input text is: %s.\n",text);
    return 0;
  }
}
