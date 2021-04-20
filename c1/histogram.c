#include <stdio.h> 
#define MAXLEN 30
/*
for each word -> wl ++ per char
after space/tab/nl wlarr[wl]+=1, wl=0
*/

main () {
  int c, i, j, wl;
  int wcounts[MAXLEN];
  wl=0;

  // populate wcounts with 0s
  for (i=0;i<MAXLEN; i++) {
    wcounts[i]=0;
  }

  while ((c=getchar())!=EOF) {
    if (c==' ' || c=='\n' || c=='\t') {
      if (wl < MAXLEN ){
        ++wcounts[wl];
      } else {
        printf("Skipping word with length %d\n", wl);
        wl=0;
      }
    } else {
      ++wl;
    }
  }
  for (i=0; i<MAXLEN; i++) {
    printf("%d|", i);
    for (j=0; j<wcounts[i];j++){
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
