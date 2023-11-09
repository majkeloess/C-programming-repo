#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void wypisz_i(int *poczatek, int *koniec)
{
    while (poczatek < koniec)
        printf("%4d \n", *poczatek++);
    printf("\n");
    return;
}

int find_min_ind (int *tab, int length)
{
    int index = 1;
    
    for(int i = 1; i < length; i++)
    {
        if(tab[i] < tab[i+1])
        {
            index++;
            //printf("%d\n",index);
        }
    }
    
    if(tab[0] < tab[index])
    {
        index = 0;
    }

    return index;
}


int main(void)
{
    int tab_A[] = {3, 5, 33, 1, 7, 9, 55, 1, 11, 22, 12, 6, 8, 4, 44, 6, 42, 2, 8, 26, 64, 80, 22, 12, 6, 8, 4, 44, 6, 42, 2, 16, 5, 33, 1, 7, 9, 55, 1, 11, 22, 34, 78, 11, 21, 9, 12, 5, 3, 9};

    int index;
    
    wypisz_i(tab_A, tab_A+50);
    
    printf("%4d\n",find_min_ind(tab_A, 50));
    printf("%d",tab_A[30]);

    return 0;
}