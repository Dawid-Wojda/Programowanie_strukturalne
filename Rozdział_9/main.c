/*ZADANIE 1 Rozdział 9 - Funkcje*/
#include<stdio.h>
#include<string.h>

void min(double x, double y);

int main(void)
{
    char x, y;

    printf("Program porownoje dwie liczby za pomoca fynkcji, i zwraca mniejsza z nich\n");
    printf("Podaj liczbe x: ");
    scanf("%lf", &x);
    printf("Podaj liczbe y: ");
    scanf("%lf", &y);
    min(x, y);
}

void min(double x, double y)
{
    if (x > y)
    {
        printf("liczba %lf jest wieksza od %lf", x, y);
    }
    else  if (y > x)
    {
        printf("liczba %lf jest wieksza od %lf", y, x);
    }
    else printf("liczby sa rowne");

}