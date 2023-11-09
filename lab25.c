#include <stdio.h>

int main(void)
{
    int wysokosc;

    do
    {
        scanf("%d", &wysokosc);
    } while (wysokosc <= 0);

    for (int i = 1; i <=wysokosc; i++)
    {
        for (int j = 0; j <= wysokosc+1-i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= ((i - 1)*2) + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}