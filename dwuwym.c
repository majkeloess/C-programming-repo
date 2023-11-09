#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab_1[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // ilosc wierszy zostanie wyznaczona na podstawie ilosci elementów
    int tab_2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int var_2 = sizeof(tab_2) / sizeof(int); // ilosc elementów typu integer w tablicy tab_2 - takich elementów jest 12

    int var_1 = sizeof(tab_1) / sizeof(*tab_1); // ilosc elementów w tablicy tab_1, traktując tablice tab_1 jako tablice jednowymiarowa o elementach-wierszach 4-ro elementowych - - takich elementów jest 3

    printf("var_1 = %d\n", var_1);
    printf("var_2 = %d\n", var_2);
    printf("\ntab_1\n-------------------\n");
    for (int i = 0; i < var_1; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("tab_1[%d][%d] = %d \t", i, j, tab_1[i][j]);
        printf("\n");
    }

    printf("\ntab_2\n-------------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("tab_2[%d][%d] = %d \t", i, j, tab_2[i][j]);
        printf("\n");
    }

    printf("\ntab_2\n-wypisanie wskaznikiem do integera------------------\n");

    int *wsk = tab_1[0];
    for (int i = 0; i < 3 * 4; i++)
        printf("i = %d  tab_2[%d][%d] = %d \n", i, i / 4, i % 4, *wsk++);
}
