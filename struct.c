#include <stdio.h>
#include <string.h>

struct item
{
      int id;
      char name[40];
      int os;
}; // deklaracja struktury
void print_it(struct item t)
{
      printf("Item nmbr : %d\n", t.id);
      printf("Item name : %s\n", t.name);
      printf("On shelf : %d\n", t.os);
} // definicja funkcji

struct item build_it(int n, const char *name, int ns)
{
      struct item temp; // zmienna tymczasowa
      temp.id = n;      // blok przypisan
      strcpy(temp.name, name);
      temp.os = ns;
      return temp; // zwracamy strukture przez wartosc
}

int main(void)
{

      struct item it = {914, "Printer cable", 57};
      struct item it1 = build_it (914 , "Printer cable", 57);
      print_it(it); // wywolanie
}