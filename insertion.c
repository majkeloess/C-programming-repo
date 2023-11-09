#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int i_rand(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void insertion(int *tab)
{
    int j = 1;
    int k = j-1;
    int key = tab[j];
    
    for(j; j < N; j++)
    {
        key = tab[j];
        k=j-1;

        while (k > -1 && tab[k] > key)
        {
            tab[k+1] = tab[k];
            k--;
        }

        tab[k+1] = key;
    }
}

int main(void)
{
    srand(time(NULL));

    int T[N];

    for (int i = 0; i < N; i++)
    {
        T[i] = i_rand(1,99);
        printf("T[%d] = %d\n", i, T[i]);
    }
    
    insertion(T);
    
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        printf("T[%d] = %d\n", i, T[i]);
    }
        getchar();
        return 0;
}