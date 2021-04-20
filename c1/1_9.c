#include <stdio.h> 

main(void){
  int c;
  while ((c=getchar()) != EOF) {
    if (c=='\t') {
      c = '\\t';
      putchar(c);
    }
    if (c=='\n') {
      c= '\\n';
      putchar(c);
    }
    if (c=='\b') {
      c= '\\b';
      putchar(c);
    } else {
      putchar(c);
    }

  }
  return 0;
}
