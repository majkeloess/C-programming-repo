#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i_rand(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

int main(void)
{

    int A[50], B[50], S[51];
    int i, j, k, l, m, n;
    srand(time(0));

    B[0] = i_rand(1, 9);
    A[0] = i_rand(1, 9);

    for (i = 1; i <= 49; i++)
    {
        A[i] = i_rand(0, 9);
        B[i] = i_rand(0, 9);
    }

    for (n = 0; n <= 50; n++)
    {
        S[n] = 0;
    }

    printf("  ");

    for (j = 0; j <= 49; j++)
    {
        printf("%d", A[j]);
    }

    printf("\n+ ");

    for (k = 0; k <= 49; k++)
    {
        printf("%d", B[k]);
    }

    printf("\n----------------------------------------------------\n");

    for (l = 49; l >= 0; l--)
    {
        if (S[l + 1] + A[l] + B[l] > 9)
        {
            S[l + 1] = S[l + 1] + A[l] + B[l] - 10; // zaczynam od S[50] = A[49]+B[49] i mam nadpisać 1 w S[49]
            S[l]++;
        }
        else
        {
            S[l + 1] = S[l + 1] + A[l] + B[l];
        }
    }
    printf(" ");

    for (m = 0; m <= 50; m++)
    {
        printf("%d", S[m]);
    }

    return 0;
}