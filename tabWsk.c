#include <stdio.h>

int main()
{
    int tablica[3][4];            // Deklaracja tablicy dwuwymiarowej 3x4
    int *wskaznik_wiersza = NULL; // Wskaźnik do aktualnego wiersza
    int *wskaznik_kolumny = NULL; // Wskaźnik do aktualnej kolumny

    // Wypełnienie tablicy za pomocą wskaźników i inkrementacji adresów
    for (int i = 0; i < 3; i++)
    {
        wskaznik_wiersza = tablica[i]; // Ustawienie wskaźnika wiersza na początku aktualnego wiersza
        for (int j = 0; j < 4; j++)
        {
            *wskaznik_wiersza = i * 4 + j; // Przypisanie wartości do komórki tablicy za pomocą wskaźnika wiersza
            wskaznik_wiersza++;            // Inkrementacja wskaźnika wiersza, aby wskazywał na kolejną kolumnę
        }
    }

    // Wyświetlenie zawartości tablicy
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d",tablica[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
