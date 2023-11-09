#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZ 10

int fcmpr(const void *a, const void *b)
{
      float fa = *(const float *)a;
      float fb = *(const float *)b;
      return (fa > fb) - (fa < fb);
}

int icmpr(const void *a, const void *b)
{
      return *(const int *)a - *(const int *)b;
}

int scmpr(const void *a, const void *b)
{
      return strcmp((const char *)a, (const char *)b);
}

int main(void)
{
      srand((unsigned)time(NULL));
      int tab[SIZ];
      float ftab[SIZ];

      for (int i = 0; i < SIZ; ++i)
      {
            tab[i] = 11 + rand() % 234;
            ftab[i] = (11 + rand() % 234) / 10.0;
      }

      for (int i = 0; i < SIZ; ++i)
      {
            printf("%5d", tab[i]);
      }
      putchar('\n');

      qsort(tab, SIZ, sizeof(int), icmpr);
      qsort(ftab, SIZ, sizeof(float), fcmpr);

      for (int i = 0; i < SIZ; ++i)
      {
            printf("%5d", tab[i]);
      }
      putchar('\n');

      int key = tab[rand() % SIZ];
      int *bs = bsearch(&key, tab, SIZ, sizeof(int), icmpr);
      printf("Wartosc do znalezienia : %d, Jej wsk oraz indeks: %p %d\n", key, bs, bs-tab);

      char ctab[SIZ + 1] = { '\0'};
      
      for (int i = 0; i < SIZ; ++i)
            ctab[i] = 'a' + rand() % ( 'z' - 'a' + 1);
      
      puts(ctab);
      qsort(ctab, SIZ, sizeof(char), scmpr);
      puts(ctab);

      return 0;
}