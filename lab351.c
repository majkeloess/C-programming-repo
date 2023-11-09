#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double d_rand(double min, double max)
{
    double r = (double)rand() / RAND_MAX;
    return r * (max - min) + min;
}

int main(void)
{
    int n, l_losowane;
    int tab[10];

    for (int i = 0; i <= 9; i++)
    {
        tab[i] = 0;
    }

    printf("Podaj liczbe losowan: ");
    scanf("%d", &n);
    srand(time(0));

    for (int i = 1; i <= n; i++)
    {
        l_losowane = d_rand(0.0, 9.9999);

        for (int j = 0; j <= 9; j++)
        {
            if ((l_losowane >= j) && (l_losowane < (j + 1)))
            {
                tab[j]++;
            }

            /*if (l_losowane >= 0.0 && l_losowane < 1.)
            {
                tab[0]++;
            }
            if (l_losowane >= 1.0 && l_losowane < 2.)
            {
                tab[1]++;
            }
            if (l_losowane >= 2.0 && l_losowane < 3.)
            {
                tab[2]++;
            }
            if (l_losowane >= 3.0 && l_losowane < 4.)
            {
                tab[3]++;
            }
            if (l_losowane >= 4.0 && l_losowane < 5.)
            {
                tab[4]++;
            }
            if (l_losowane >= 5.0 && l_losowane < 6.)
            {
                tab[5]++;
            }
            if (l_losowane >= 6.0 && l_losowane < 7.)
            {
                tab[6]++;
            }
            if (l_losowane >= 7.0 && l_losowane < 8.)
            {
                tab[7]++;
            }
            if (l_losowane >= 8.0 && l_losowane < 9.)
            {
                tab[8]++;
            }
            if (l_losowane >= 9.0 && l_losowane < 10.)
            {
                tab[9]++;
            } */
        }
        
    }

    for (int i = 0; i <= 9; i++)
        {

            printf("Przedzial [%d, %d): %d punktow\n", i, i + 1, tab[i]);
        }


    return 0;
}

