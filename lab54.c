#include <stdio.h>

int compare_lsb(int num1, int num2) {
  size_t int_bytes = sizeof(int) * __CHAR_BIT__;
  int r_mask = (1 << int_bytes / 2) - 1;

  printf("Wartosc maski: %d\n", r_mask);

  int num1_r_bits = num1 & r_mask;
  int num2_r_bits = num2 & r_mask;

  if (num1_r_bits == num2_r_bits) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int num1, num2;
  printf("Wpisz dwie liczby oddzielone spacja: ");
  scanf("%d %d", &num1, &num2);

  int result = compare_lsb(num1, num2);

  if (result == 1) {
    printf("Prawda\n");
  } else {
    printf("Falsz\n");
  }

  return 0;
}