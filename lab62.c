#include <stdio.h>
#include <ctype.h>
#define LENGTH 30

void funkcja(char *lancuch)
{
    int i = 0;
    int j = 0;
    char nowy[LENGTH];

    while (lancuch[i] != 0)
    {
        if (!isspace(lancuch[i]))
        {
            nowy[j] = lancuch[i];

            j++;
        }

        i++;
    }

    //nowy[j] = '\0';

    printf("%s", nowy);
}

int main(void)
{
    char lancuch[LENGTH] = "To jest TESTOWY      lancuch";

    printf("%s\n", lancuch);

    funkcja(lancuch);

    return 0;
}