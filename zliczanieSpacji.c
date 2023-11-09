#include <stdio.h>

int c_spaces(const char *str) // ilosc spacji
{
      int c = 0;

      for (; *str; str++)
            if (*str == ' ')
                  c++;

      return c;
}

int s_size(const char *s) // poszukiwanie końca łańcucha
{
      int n = 0;

      while (*s++)
            n++;

      return n;
}
int read_line(char str[], int n)
{
      int c, i = 0;

      do
      {
            c = getchar();
            if (i < n)
                  str[i++] = c;
      } while (c != '.');

      str[i] = '\0';
      return i;
}

int main(void)
{

      int sp = c_spaces("abc   abc    abc     abc");

      printf("%d", sp);

      char s[] = "To be or not to be", d[40]; //kopiowanie łancucha
      char *p1 = s, *p2 = d;
      while (*p2++ = *p1++);
      printf("s = %s, d = %s\n", s, d);

      return 0;
}
