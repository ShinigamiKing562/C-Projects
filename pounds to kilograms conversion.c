#include <stdio.h>

int main(void) {
  printf("Pounds to kilograms converter\n");
  float pounds = 0;
  float kilos;

  while (pounds <= 135) {
    if (pounds > 90)
      printf("%2.2f pounds = %2.2f kilograms\n", pounds,
             (kilos = pounds / 2.205));
    pounds = pounds + 10;
  }
  return 0;
}
