#include <stdio.h> 

#define MAXLINE 1000

int getLine(char [], int);
// void reverse(char[]);

int getLine(char s[], int lim) {
  int c, i; 

  for (i=0; i < lim-1 && (c=getchar()) != EOF && c !='\n'; ++i)
    s[i] = c;

  if (c=='\n') {
    s[i] = c; // why keep nl? --> so you dont print everything on one line
    ++i;
  }

  s[i] = '\0'; // end line

  return i;
}

void reverse(char s[]) { 

  int i, j, len, temp;
  len = 0;
  for (i=0; s[i] != '\0'; ++i)
    ++len;

   //now we know how long the string is
  for (i=0, j=len -1 ; i< len/2; ++i, --j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }

}

int main(void) {
  int len;

  char line[MAXLINE];

  while ((len=getLine(line, MAXLINE)) > 0){
    line[--len] = '\0'; // remove nl
    reverse(line);
    printf("%s\n", line);
  }
  return 0;
}





