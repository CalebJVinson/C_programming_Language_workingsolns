#include <stdio.h>

#define MAX 10

int main(void) {
  long word[MAX + 1];
  char letchar;
  int i, a, s1, lenofword, res, maxres, count;
  lenofword = res = maxres = count = 0;
  a = 0;

  for(i = 0; i <= MAX; i++)
    printf("Enter Text, Ctrl+Z exits \n\n");
  while (a==0) {
    letchar = getchar();
    if(letchar == ' ' || letchar == '\t' || letchar == '\n' || letchar == EOF) {
      if (count == 0) {
        s1 = 0;
        count = 1;
        if(lenofword <= MAX) {
          if(lenofword >0) {
            res =++ word[lenofword-1];
            if(res > maxres){
              maxres = res;
            }
        }
      }
      else {
        res =++ word[MAX];
        if(res > maxres){
          maxres = res;
        }
        if(letchar == EOF) {
          a = 1;
        }
      }
    }
    else {
      if(count ==1 || s1 == 1) {
        s1 = 0;
        lenofword = 0;
        count = 0;
      }
      ++lenofword;
    }
  }
for(res = maxres; res > 0; res--) {
  printf("%4d    |  ", res);
  for(i = 0; i <= MAX; i++) {
    if word[i] >= res){
      printf("*   ");
    }
    else {
      printf("    ");
    }
    printf("\n");
  }
  printf("     +");
  for(i = 0; i < MAX; i++){
    printf("---");
    printf("\n      ");
  }
  for(i = 0; i < MAX; i++){
    printf(" >%d\n", MAX);
  }
}
    return 0;
}
