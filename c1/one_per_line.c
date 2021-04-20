#include <stdio.h> 

#define IN 1
#define OUT 0

main(void) {
  int c, state;
  state = OUT;
  while((c=getchar()) != EOF) {
    if (c==' '|| c=='\n'|| c=='\t') {
      state = OUT;
      putchar('\n');
    } else if (state==OUT){
      putchar('\n');
      state=IN;
      putchar(c);
    } else if (state==IN){
      putchar(c);
    }
  }
  return 0;
}
