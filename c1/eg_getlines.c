#include <stdio.h> 
#define MAX_LINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main() {
  int len;
  int max;

  char line[MAX_LINE];
  char longest[MAX_LINE];

  max = 0;

  while ((len = getline(line,MAX_LINE))>0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max >0)
    printf("%s", longest)

  return 0;
}


//getline read a line into s, return length

int getline(char s[], int lim) {
  int c, i;

  for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++) {
    s[i] = c;
  }
  if (c=='\n') {
    s[i] =c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;

  i=0;
 while ((to[i]=from[i]) !='\0') 
   ++i;
}
