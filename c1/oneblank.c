#include <stdio.h> 

main(void) {
  int c, last_was_blank;
  last_was_blank = 0;
  while ((c=getchar()) != EOF) {

    if (c==' ') {
      if (last_was_blank==0){
        putchar(c);
      }
      last_was_blank = 1;
    }
    if (c != ' '){
      putchar(c);
      last_was_blank=0;
    }
  }
  return 0;
}
