#include <stdio.h> 

#define N_SPACES 4

int main(void) {
  // v1: stream to stream
  int i, c;

  while ((c=getchar()) != EOF) {
    if (c=='\t'){
      for (i=0; i<N_SPACES-1; ++i)
        putchar(' ');
    } else {
      putchar(c);
    }
  }
}
