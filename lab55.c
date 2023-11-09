#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_sum_prod_avg(int rolls,
                      double* const ptr_sum,
                      long double* const ptr_prod,
                      double* const ptr_avg) {
  double random_num;
  *ptr_sum = 0;
  *ptr_prod = 1;

  for (int i = 0; i < rolls; i++) {
    random_num = ((double)rand() / RAND_MAX) + 0.5;
    *ptr_sum += random_num;
    *ptr_prod *= random_num;
  }
  *ptr_avg = *ptr_sum / rolls;
}

int main(void) {
  srand(time(NULL));

  int n;
  double suma;
  long double iloczyn;
  double srednia;

  printf("Podaj liczbe losowan: ");
  scanf("%d", &n);

  rand_sum_prod_avg(n, &suma, &iloczyn, &srednia);

  printf("Suma: %lf\nIloczyn: %Lf\nSrednia: %lf\n", suma, iloczyn, srednia);

  return 0;
}