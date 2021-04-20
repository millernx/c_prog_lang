#include <stdio.h>

// Count blanks, tabs and newlines
main(void) {
  int nl, tb, bl, c;
  bl = tb = nl =0;
  while ((c=getchar())!=EOF){
    if (c=='\n') ++nl;
    if (c=='\t') ++tb;
    if (c==' ') ++bl;
  
  }
  printf("New Lines: %d\n", nl);
  printf("Tabs: %d\n", tb);
  printf("Blanks: %d\n", bl);

  return 0;
}
