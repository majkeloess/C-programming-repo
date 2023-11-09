#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *usuwanie(char *text1, char *text2)
{
    int len2 = strlen(text2); // len2 to dlugosc drugiego stringa
    char *result = (char*)malloc(strlen(text1) + 1); //alokacja pamięci na wynikowy string
    char *pos = text1; //adres początku text1
    char *temp = result; //adres poczatku wynikowego

    while (*pos) // rób jeśli wartość ukryta pod adresem text1 jest różna od /0
    {
        if (strstr(pos, text2) == pos) //
        {
            pos += len2; //przechodze po adresach dalej żeby minac str 2
        }
        else
        {
            *temp++ = *pos++; //zapisuje do temp wartosc na aktualnej pozycji pos
        }
    }
    *temp = '\0';
    return result;
}

int main(void)
{
    char text_1[] = "Jak sie nie ma, co sie lubi, to sie lubi, co sie ma.";
    char text_2[] = "sie";

    char *nowy = usuwanie(text_1, text_2);

    putchar('\n');
    printf("Przed wywolaniem funkcji :\n");
    printf("Lancuch text1: %s\n", text_1);
    printf("Lancuch text2: %s\n\n", text_2);
    printf("Po wywolaniu funkcji: \n%s\n", nowy);

    free(nowy);

    putchar('\n');
    return 0;
}