#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double d_rand(double min, double max)
{
      double r = (double)rand() / RAND_MAX;
      return r * (max - min) + min;
}
struct point
{
      double x;
      double y;
};

struct vect_point
{
      struct point A;
      struct point B;
};

struct vect
{
      struct vect_point vects;
      double len;
      double slope;
};

double vect_len(struct vect_point v)
{
    double dx = v.B.x - v.A.x;
    double dy = v.B.y - v.A.y;
    
    return sqrt(dx * dx + dy * dy);
}

double vect_slope(struct vect_point v)
{
      return atan2((v.B.y - v.A.y), (v.B.x - v.A.x));
}

void fill_tab(struct vect *tab, int tab_len)
{
      for(size_t i = 0; i < tab_len;i++)
      {
            tab[i].len = vect_len(tab[i].vects);
            tab[i].slope = vect_slope(tab[i].vects); 
      }
}

int main(int argc, int *argv[])
{
      /*if (argv[1] == NULL)
      {
            printf("Nie podano argumentu wywolania!!\n");
            exit(1);
      }*/

      int n = 11;

      struct vect tab_vect[n];

      for (size_t i = 0; i < n; i++)
      {
            tab_vect[i].vects.A.x = d_rand(1, 20);
            tab_vect[i].vects.A.y = d_rand(1, 20);
            tab_vect[i].vects.B.x = d_rand(1, 20);
            tab_vect[i].vects.B.y = d_rand(1, 20);
      }
      
      fill_tab(tab_vect, n);

      puts("numer       Ax Ay                   Bx By       dlugosc      nachylenie");
      for (size_t i = 0; i < n; i++)
      {
            printf("    %d     (%.2lf, %.2lf)          (%.2lf, %2.2lf)      %3.2lf           %3.2lf\n",i+1,tab_vect[i].vects.A.x,tab_vect[i].vects.A.y,tab_vect[i].vects.B.x,tab_vect[i].vects.B.y,tab_vect[i].len, tab_vect[i].slope);
      }

      return 0;
}