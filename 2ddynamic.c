#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 2


size_t get_i(size_t w, size_t k, size_t cols)
{
      return w * cols + k;
}

int main(void)
{

      double *tab3 = malloc(ROWS * COLS * sizeof(double)); // Alokacja wszystkich elementów naraz.
      
      for (size_t w = 0; w < ROWS; ++w)                    // Pętla po wierszach.
      {
            for (size_t k = 0; k < COLS; ++k) // Pętla po kolumnach.
            {
                  size_t i = get_i(w, k, COLS); // Mapowanie indeksów 2D na 1D.
                  *(tab3 + i) = 13.5;           // Przypisanie wartości do elementu z wiersza w oraz kolumny k.
            }
      }
      
      free(tab3); // Zwolnienie pamięci.
}