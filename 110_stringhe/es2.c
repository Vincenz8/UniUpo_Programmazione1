#include <stdio.h>
#include <ctype.h>

#define R 5
#define C 10

void carica_stringhe(char (*matrice)[C]);
void converti_minsucolo(char (*stringhe)[C]);
void visualizza_vett(char (*stringhe)[C]);

int main()
{
    char stringhe[R][C];

    carica_stringhe(stringhe);
    visualizza_vett(stringhe);
    converti_minsucolo(stringhe);
    visualizza_vett(stringhe);

}

/*carica_stringhe: inizializza un vettore di stringhe*/
void carica_stringhe(char (*matrice)[C])
{
    for (int i = 0; i < R; i++)
    {
        printf("Inserisci stringa[%d]: ", i);
        scanf("%s", *(matrice+i));
    }
}

/*converti_minuscolo: converte tutti i caratteri drl vettore di stringhe in minuscolo*/
void converti_minsucolo(char (*stringhe)[C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if(islower(*(*(stringhe+i)+j)))
            {
                *(*(stringhe+i)+j) = toupper(*(*(stringhe+i)+j));
            }
        }
    }
}

/*visualizza_vett: visualizza vettore di stringhe*/
void visualizza_vett(char (*stringhe)[C])
{
    for (int i = 0; i < R; i++)
    {
        printf("Stringa[%d]: %s\n", i, *(stringhe+i));
    }
}