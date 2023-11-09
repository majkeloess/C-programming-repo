#include <stdio.h>

double FUNKCJA(int x) // funkcja z parametrem int zwracająca double
{
      return x + 0.1;
}

float FUNKCJA_LICZBA(void)
{
      return 0.1;
}
// funkcja zwracająca liczbę float
// nie ma funkcji zwracającej tablicę
// nie ma funkcji zwracającej funkcję

double FUNKCJA1(int x);
double FUNKCJA2(int x);

int main(void)
{

      float LICZBA = 9.3;   // liczba rzeczywista
      float *wsk = &LICZBA; // wskaźnik na liczbę float

      int TAB_INT[5] = {1, 2, 3, 4, 5}; // 5-cio elementowa tablica liczb int
      int(*wsk_tab)[5];                 // wskaźnik na 5-cio elementową tablicę liczb int
      wsk_tab = &TAB_INT;

      for (int i = 0; i < 5; i++)
      {
            printf("%d %d\n", TAB_INT[i], (*wsk_tab)[i]); // 1 1 2 2 itd..
      }

      double (*wsk_fun)(int);      // wskaźnik na funkcję, z parametrem int
      wsk_fun = FUNKCJA;           // zwracająca double
      printf("%.2lf", wsk_fun(5)); // wypierdala 5.10

      float tab_float[10]; // tablica liczb typu float
      int tab_tab[10][5];  // tablica tablic

      float *tab_wsk_liczb[10]; // tablica wskaźników na liczby
      tab_wsk_liczb[2] = &LICZBA;
      printf("\n%.1f", *tab_wsk_liczb[2]); // wypierdala 9.3

      int(*tab_wsk_tab[6])[5]; // tablica wskaźników na tablice
      tab_wsk_tab[2] = &TAB_INT;

      double (*tab_wsk_fun[3])(int); // tablica wskaźników na funkcje,
      tab_wsk_fun[2] = FUNKCJA;
      tab_wsk_fun[1] = FUNKCJA1;
      tab_wsk_fun[0] = FUNKCJA2; // z parametrem int zwracająca double
      printf("\n%.2lf", tab_wsk_fun[2](10));

      // FUNKCJE ZWRACAJĄCE WSKAŹNIKI
      float *FUNKCJA_W1(void) // funkcja (void)
      {
            float *wsk_liczby; // zwracająca wskaźnik na liczbę float
            wsk_liczby = &LICZBA;
            return wsk_liczby;
      }
      int(*FUNKCJA_W2(void))[5] // funkcja (void) zwracająca wskaźnik
      {
            int(*wsk_tab)[5]; // na tablicę pięciu liczb int
            wsk_tab = &TAB_INT;
            return wsk_tab;
      }

      double (*FUNKCJA_W3(void))(int) // funkcja (void) zwracająca
      {
            double (*wsk_fun)(int); // wskaźnik na funkcję z parametrem int
            wsk_fun = FUNKCJA;      // zwracająca double
            return wsk_fun;
      }

      return 0;
}