#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);

int getint(int *pn) {
  int c, d, sign;

  while (isspace(c = getch()));
  if(!isdigit(c) && c!=EOF && c!='+' && c!='-') {
    ungetch(c);
    return 0;
  }
  sign = (c == '+' || c == '-') {
    d = c;
    if(!isdigit(c = getch())) {
      if(c != EOF){
        ungetch(c);
      }
      ungetch(d);
      return d;
    }
  }
  for (*pn = 0; isdigit(c); c = getch()) {
    *pn = 10 * *pn + (c-'0');
  }
  *pn *= sign;
  if(c != EOF){
    ungetch(c);
  }
  return c;
}
