/*
Instruction:
Write an alternate version of squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2
 
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != ′\0′; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = ′\0′;
}
 */
#include <stdio.h> 


void squeeze(char [], char[]);

void squeeze(char in[], char filter[]){
  int i, j, k, hit;
  hit=0;
  for (i=j=0; in[i] !='\0'; i++){
    //printf("Entering %i | hit: %i | char: %c\n", i, hit, in[i]);
    for(k=0; filter[k] !='\0'; k++){
      if (in[i] == filter[k]){
        printf("Hit: %c = %c in filter\n", in[i], filter[k]);
        ++hit;
      }
        
    }
    if (hit == 0) {
      printf("swapping %c for %c\n", in[j], in[i]);
      in[j++] = in[i];
    }
    hit =0;
    //printf("Exiting %i | hit: %i | char: %c\n", i, hit, in[i]);
  }
  in[j] ='\0';
}

int main(void) {
  char in[100] = "A test string";
  char filter[10] = "te";
  squeeze(in, filter);
  printf("%s\n", in);
}
