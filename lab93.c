#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double fun0(double x)
{
      return log(x);
}
double fun1(double x)
{
      return x * x;
}
double fun2(double x)
{
      return sin(x);
}
double fun3(double x)
{
      return cos(x);
}

void print_fun(double (*f)(double), char *str, double *tab, size_t tab_len)
{
      for(int i = 0; i < tab_len; i++)
      {
            printf("%s(%.1lf)=%.4lf  ",str, tab[i], f(tab[i]));
      }
}

int main(void)
{     
      char* nazwy[]={"log", "pow","sin","cos"};
      double data[8] = { 3.5, 1.0, 2.5, 2.0, 1.5, 3.0, 0.5, 4.0 };

      double (*TAB_FUN[5])(double) = {fun0, fun1, fun2, fun3, NULL};

      double (**wsk_fun)(double);
      wsk_fun = TAB_FUN;

      char **str = nazwy;
      
      while(wsk_fun)
      {
            print_fun(*wsk_fun, *str, data, 8);
            wsk_fun++;
            str++;
      }

      return 0;
}