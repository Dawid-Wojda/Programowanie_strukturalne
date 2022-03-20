#include <stdio.h>

char znak(char ch, int i, int j);

int main(void)
{
    int i, j;
    char ch;
    
    printf("Program pobiera znak i wyswietla go okreslona ilosc razy w okreslonej ilosci wierszy\n");
    printf("Wprowadz znak:\n");
    scanf("%c", &ch);
    printf("podaj ilosc powtorzen w wierszu: \n");
    scanf("%d", &j);
    printf("podaj ilosc wierszy: \n");
    scanf("%d", &i);
    znak(ch, i, j);
}

char znak(char ch, int i, int j)
{
    int licznik, licznik2;
    for (licznik = 0; licznik < i; licznik++)
    {
        for(licznik2 = 0; licznik2 < j; licznik2++)putchar(ch);
        putchar('\n');
    }
}