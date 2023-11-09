#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 10

double *f_add(int n, double *tab1, double *tab2, double *tab3)
{
    int index = 0;

    for(int i = 0 ; i<= (n-1); i++)
    {
        tab3[i] = tab1[i] + tab2[i];

        if (tab3[i]> tab3[index])
        {
            index = i;
        }
    }
    
    return &tab3[index];
}

int main (void)
{
    
    double tab1[LENGTH], tab2[LENGTH], tab3[LENGTH];
    
    srand(time(NULL));

    for(int i = 0; i <= (LENGTH-1); i++)
    {
        tab1[i] = (double)rand() / RAND_MAX;
        tab2[i] = (double)rand() / RAND_MAX;

    }

    double *index_ptr = f_add(LENGTH, tab1, tab2, tab3);
    
    int index = index_ptr - tab3;
    
    
    for(int i = 0; i <= LENGTH-1; i++)
    {
        printf("tab3[%d]= %lf, adres: %p\n",i, tab3[i], &tab3[i]);
    }

    printf("Maksimum: tab3[%d] = %lf, adres: %p",index, tab3[index], index_ptr);

    return 0;
}