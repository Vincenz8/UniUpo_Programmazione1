#include <stdio.h>
#include <string.h>

#define R 6

void carica_stringa(char (*stringhe)[R]);
void visualizza_vett(char (*stringhe)[R]);
void shift_sinistra(char (*stringhe)[R]);

int main()
{
    char stringhe[R][R];

    carica_stringa(stringhe);
    
    visualizza_vett(stringhe);

    printf("\nSHIFT A SINISTRA\n");

    shift_sinistra(stringhe);

    visualizza_vett(stringhe);

}

/*carica_stringa: inizializza la prima stringa, genera le altre stringhe incrementando progressivamente l'ultimo carattere della prima stringa*/
void carica_stringa(char (*stringhe)[R])
{
    printf("Inserisci la prima stringa: ");
    scanf("%s", *(stringhe));

    int u_carat = strlen(stringhe[0]) - 1;

    for (int i = 1; i < R; i++)
    {
        strcpy(stringhe[i], stringhe[i - 1]);

        stringhe[i][u_carat]++;
    }
}

/*visualizza_vett: visualizza vettore di stringhe*/
void visualizza_vett(char (*stringhe)[R])
{
    for (int i = 0; i < R; i++)
    {
        printf("Stringa[%d]: %s\n", i, *(stringhe+i));
    }
}

/*shift_sinistra: effettua spostamento circolare a sinistra degli elementi del vettore*/
void shift_sinistra(char (*stringhe)[R])
{
    for (int i = 0; i < R - 1; i++)
    {
        char aus[R];

        strcpy(aus, stringhe[i]);
        strcpy(stringhe[i], stringhe[i + 1]);
        strcpy(stringhe[i+1], aus);
    }
}