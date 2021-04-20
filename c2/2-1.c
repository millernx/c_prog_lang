#include <stdio.h> 
#include <limits.h>

#define BITS(x) (sizeof(x) * 8)

void SignedRange(unsigned int);
void UnsignedRange(unsigned int);

void SignedRange(unsigned int bits) {
  int min =0;
  int max =0;
  min = -(1L << (bits-1));
  max = ((1L << (bits-1) )-1);

  printf(" %d to %u\n\n", min, max);
}

void UnsignedRange(unsigned int bits) {
  unsigned int min=0;
  unsigned long long max =0;
  max = ((1LLU << bits)-1);
  printf(" %u to %llu\n\n", min, max);

}

int main(void) {
  printf("\n unsigned char =>");
  UnsignedRange(BITS(unsigned char));

  printf("\n signed char =>");
  SignedRange(BITS(signed char));

  printf("\n unsigned short =>");
  UnsignedRange(BITS(unsigned short));

  printf("\n signed short =>");
  SignedRange(BITS(unsigned short));

  printf("\n int =>");
  SignedRange(BITS(int));

  printf("\n unsigned int =>");
  UnsignedRange(BITS(unsigned int));

  printf("\n unsigned long long");
  UnsignedRange(BITS(long));


  printf("\n----------------------------------\n");
  printf("Using limits.h\n");
  printf("Signed char =>\n min: %i max: %u \n", SCHAR_MIN,SCHAR_MAX);
  
}
