#include <stdio.h>
#include <string.h>

#define R 5
#define C 10

void carica_stringhe(char (*stringhe)[C]);
void visualizza_vett(char (*stringhe)[C]);
void cerca_parola(char (*stringhe)[C], char *parola, int* i_pocc, int* i_uocc);

int main()
{
    char stringhe[R][C];
    char parola[C];
    int i_pocc, i_uocc;

    carica_stringhe(stringhe);
    printf("\n");
    visualizza_vett(stringhe);

    printf("Inserisci parola da cercare: ");
    scanf("%s", parola);

    i_pocc = i_uocc = -1;
    
    cerca_parola(stringhe, parola, &i_pocc, &i_uocc);

    printf("\nPrima occorrenza: %d Ultima occorrenza: %d", i_pocc, i_uocc);

}



/*carica_stringhe: inizializza un vettore di stringhe*/
void carica_stringhe(char (*stringhe)[C])
{
    for (int i = 0; i < R; i++)
    {
        printf("Inserisci stringa[%d]: ", i);
        scanf("%s", *(stringhe+i));
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

/*cerca_parola: restituisce l'indice della prima e dell'ultima occorrenza della parola all'interno del vettore. Restituisce -1 e -1 altrimenti*/
void cerca_parola(char (*stringhe)[C], char *parola, int* i_pocc, int* i_uocc)
{
    for (int i = 0; i < R; i++)
    {
        if (strstr(stringhe[i], parola) != NULL)
        {
            *i_pocc = (*i_uocc < 0) ? i : *i_pocc;
            *i_uocc = i;
        }
    }
}