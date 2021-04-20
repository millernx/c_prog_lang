#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

double fahrenheitToCelcius(int fahr);

main() {
  int fahr;

  for (fahr=UPPER; fahr >=LOWER; fahr = fahr -STEP) {
    printf("%3d %6.1f\n", fahr, fahrenheitToCelcius(fahr));
  }
}

double fahrenheitToCelcius(int f) {
  return (5.0/9.0)*(f-32);
}
