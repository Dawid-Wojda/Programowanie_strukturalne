/*ZADANIE 2 Rozdział 9 - Funkcje*/
#include<stdio.h>
#include<string.h>

void rzad_zn(char ch, int i, int j);

int main(void)
{
    char znak = 'q';
    int i, j;

    printf("Program wyswietla znak w \"i\" wierszy i \"j\" kolumnach za pomaca funkcji\n");


    printf("Podaj liczbe wierszy: ");
    scanf("%d", &j);
    printf("Podaj liczbe kolumn: ");
    scanf("%d", &i);
    rzad_zn(znak, i, j);

    return 0;
}

void rzad_zn(char ch, int i, int j)
{
    int l, ll;

  for(l = 1; l <= j; l++)
  {
    for(ll = 1; ll <= i; ll++) printf('c');
    printf("\n");
  }

    
}
