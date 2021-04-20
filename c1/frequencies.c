#include <stdio.h> 

#define ALPHA 26
#define NUM 10

int main(void) {
  int characters[ALPHA + NUM];
  int i;
  for (i=0; i< (ALPHA + NUM); i++) {
    characters[i]=0;
  }

  char c;

  while ((c=getchar()) != EOF) {
    if (c >='a' && c<='z') {
      // alpha
      ++characters[c-'a'];
    } else if (c >='0' && c<='9') {
      // numeric
      ++characters[c-'0'+ALPHA];
    }
  }

  for (i=0; i<(ALPHA+NUM); i++){
    if (i<ALPHA) {
      printf("%c:", 'a'+i);
    }
    else if (i >=ALPHA){
      printf("%c:", i+'0'-ALPHA);
    }
    int j;
    for (j=0; j<characters[i];j++) {
      printf("#");
    }
    printf("\n");
  }
  return 0;

}
