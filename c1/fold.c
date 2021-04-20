#include <stdio.h> 

#define MAX_LENGTH 1000
#define BREAK_LENGTH 70

void fold(char []);

void fold(char in[]) {
  int length, i;
  length = 0;
  while(in[length] !='\0')
    ++length;
  
  if (length <= BREAK_LENGTH){
    // output the line
    for(i=0; in[i]!='\0'; ++i)
      putchar(in[i]);
    putchar('\n');
  }
  
  else {
    // output line til BREAK_LENGTH
    for(i=0; i< BREAK_LENGTH; ++i)
      putchar(in[i]);
    putchar('\n');
    // call fold on remainder of line
    char recursionString[MAX_LENGTH];
    int j, k;
    k=0;
    for(j=BREAK_LENGTH; in[j]!='\0'; ++j){
      recursionString[k++] = in[j];
    }
    recursionString[BREAK_LENGTH+length]='\0';
    fold(recursionString);
  }
}

int main(void) {
  fold("This is a long line This is a long line This is a long line This is a long line.\n");
}
