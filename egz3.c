// Mamy zdefiniowane trzy funkcje w C zgodnie z poniższymi prototypami:
// int count(const void *, const void *);
// int max(const void *, const void *);
// int min(const void *, const void *);

// Proszę uzupełnić poniższe inicjalizacje, deklarując odpowiednie zmienne tak, żeby kod kompilował się
// bez błędów i ostrzeżeń

// ...... = {max(NULL, NULL), min(NULL, NULL), count(NULL, NULL)};
// ...... = {"max", "min", "count"}
// ...... = {max, min, count}
// ...... = { 'c','o','u','n','t'}
#include <stdio.h>
int count(const void *, const void *);
int max(const void *, const void *);
int min(const void *, const void *);

int main(void)
{
      int (*func_ptrs[])(const void *, const void *) = {max, min, count};
      char *func_names[] = {"max", "min", "count"};
      char func_chars[] = {'m', 'i', 'n', 'c', 'o', 'u', 'n', 't'};
}