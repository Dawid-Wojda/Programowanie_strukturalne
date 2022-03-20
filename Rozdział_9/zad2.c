/*ZADANIE 2 Rozdział 9 - Funkcje*/
#include<stdio.h>
#include<string.h>

char rzad_zn(char, int, int);

int main(void)
{
    char ch;
    int i, j;

    printf("Program wyswietla znak w \"i\" wierszy i \"j\" kolumnach za pomaca funkcji\n");
    printf("Podaj znak: ");
    scanf("%c",&ch);  
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &j);
    printf("Podaj liczbe kolumn: ");
    scanf("%d", &i);
    rzad_zn(ch, i, j);


    return 0;
}

char rzad_zn(char ch, int i, int j)
{
    int l, ll;

  for(l = 1; l <= j; l++)
  {
    for(ll = 1; ll <= i; ll++) putchar(ch);
    putchar('\n');
  }  
}
