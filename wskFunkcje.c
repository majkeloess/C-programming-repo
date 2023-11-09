#include <stdio.h>

double FUNKCJA(int x)
{
      return x + 0.1;
}
// funkcja zwracająca liczbę float
// nie ma funkcji zwracającej tablicę
// nie ma funkcji zwracającej funkcję

float *FUNKCJA_W1(void) // funkcja (void)
{
      float LICZBA = 9.3;
      float *wsk_liczby; // zwracająca wskaźnik na liczbę float
      wsk_liczby = &LICZBA;
      return wsk_liczby;
}
int (*FUNKCJA_W2(void))[5] // funkcja (void) zwracająca wskaźnik
{
      int TAB_INT[5] = {1, 2, 3, 4, 5};
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

double (*tab_wsk_fun[6])(int); 
 // tablica 6-ciu wskaźników na funkcje, z parametrem int zwracająca double
double (*(*wsk_tab_wsk_fun)[6])(int); 
 //wskaźnik do 6-cio elementowej tablicy wskaźników na funkcje, z parametrem int zwracająca double


double (*(*fun_wsk_tab_wsk_fun(void))[6])(int)
{
      return wsk_tab_wsk_fun;
}
// funkcja (void) zwracająca wskaźnik do 6-cio elementowej tablicy wskaźników na funkcje, z parametrem int zwracająca double

int main(void)
{

      return 0;
}