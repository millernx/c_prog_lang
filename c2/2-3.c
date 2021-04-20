#include <stdio.h> 
#include <ctype.h>

			//hexDigit = tolower(s[i]) - 'a' + 10; /* convert letters hexadecimal */

int hexToInt(char);
int htoi(char []);

int hexToInt(char c) {
  if (!isdigit(c) &&(tolower(c) < 'a' ||tolower(c) >'f') ) {
    printf("Invalid character: %c\n", c);
    return -1;
  }
  else if (!isdigit(c)) {
    return tolower(c)-'a' + 10;
  }
  else{
    return c -'0';
  }
}

int htoi(char input[]) {
  int i,sum;
  sum=0;
  for(i=0; input[i]!='\0'; ++i){
    sum = sum * 16;
    sum += hexToInt(input[i]);
  }
  return sum;
}

int main(void){
  int i;
  char c[1000] = "13F9";
  //printf("1: %i\n", hexToInt(c));
  for (i=0; c[i] != '\0'; ++i)
    printf("%c: %i\n", c[i], hexToInt(c[i]));


  int sum;
  char input[6] = "3425";
  sum=htoi(input);
  printf("Sum of %s: %i\n", input, sum);
  

  return(0);
}
