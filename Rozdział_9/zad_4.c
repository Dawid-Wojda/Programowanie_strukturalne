#include <stdio.h>
#include <math.h>

double srednia(double x, double y);

int main(void)
{
    double x, y;

    printf("Program oblicza srednia harmoniczną (q konczy program)\n");
    printf("Podaj dwie liczby:\n");
    while(scanf("%lf %lf", &x, &y) == 2)
    {
        printf("Srednia garmoniczna liczb %lf i %lf wynosi %lf\n", x, y, srednia(x, y));
        printf("Podaj dwie liczby:\n");
    }
    return 0;
}

double srednia(double x, double y)
{
    double wynik, a1, a2;
    a1 = 1/x;
    a2 = 1/y;
    wynik = 2/(a1 + a2);
    return wynik;
}