#include <stdio.h>

void Temperatura(float fahrenheit)
{
    float celsjusz = 5.0 / 9.0*(fahrenheit);
    float kelwin = celsjusz + 273.16;
    printf("Temperatura w Fahrenheitach wynosi: %.2f\nw Celsjuszach: %.2f\nw Kelwinach: %.2f",fahrenheit,celsjusz,kelwin);
}


int main(void)
{
    float temp;
    int wartownik=1;
    printf("Podaj temperature w Fahrenheitach: ");
    

    while (wartownik==1)
    {
        scanf("%f", &temp);
        wartownik = temp;
        Temperatura(temp);
    }
}