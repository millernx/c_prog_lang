// Get a line and replace string of blanks with minimum combination of tabs and spaces

#include <stdio.h> 

#define N_SPACES 4 // Tab space equivalence
#define MAX_LINE_LENGTH 1000

// 

int getLine(char [], int);
void entab(char[], char[]);

int getLine(char s[], int lim) {
  int i, c;

  for (i=0; i< MAX_LINE_LENGTH-1 && (c=getchar()) != EOF && c !='\n'; ++i ) {
    s[i]=c;
  }

  if (c=='\n') {
    s[i] = c;
    ++i;
  }
  s[i]='\0';
  return i;
}


void entab(char in[], char out[]) {
  int i, j, nblanks, ntabs;

  for(i=j=0; in[i]!= '\0'; i++){
    if(in[i] ==' ') {
      for(nblanks=ntabs=0; in[i]== ' '; i++) {
        if ((i+1) % N_SPACES ==0 ) {
          ++ntabs;
          nblanks=0;
        } else
          ++nblanks;
      }
      --i;
      while (ntabs-- >0) 
        out[j++] = '\t';
      while(nblanks-- >0)
        out[j++] ='\t'; 
    } else
      out[j++] = in[i];
  }
  out[j]='\0';
}

int main(void) {
  char out[MAX_LINE_LENGTH];

  entab("This is         a test", out);
  printf("%s", out);

  return 0;
}
