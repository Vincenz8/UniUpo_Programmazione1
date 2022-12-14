#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 4

void carica_matrice(int (*matrice)[C]);
void visualizza_matrice(int (*matrice)[C]);
void cerca_numero(int (*matrice)[C], int numero, int* i_r, int* i_c);

int main()
{
    int matrice[R][C];
    int numero = 0;
    int i_r = -1;
    int i_c = -1;

    carica_matrice(matrice);
    visualizza_matrice(matrice);
    
    printf("\nInserisci il numero da cercare: ");
    scanf("%d", &numero);

    cerca_numero(matrice, numero, &i_r, &i_c);  
    printf("\nPrima occorrenza di %d in posizione[%d][%d]", numero, i_r, i_c);  
}

/*carica_matrice: inizializza una matrice di numeri casuali da 1 cifra*/
void carica_matrice(int (*matrice)[C])
{
    int i, j;
    srand(time(NULL));

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            *((*matrice + i) + j) = (rand() % 10);
        }
    }
}

/*visualizza_matrice: visualizza una matrice*/
void visualizza_matrice(int (*matrice)[C])
{
    int i, j;

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d\t", *((*matrice + i) + j));
        }

        printf("\n");
    }
}

/*cerca_numero: cerca un numero nella matrice e restiuisce i suoi due indici alla prima occorrenza*/
void cerca_numero(int (*matrice)[C], int numero, int* i_r, int* i_c)
{
    int i, j;

    int occorrenza = 0; // assumo assente

    for (i = 0; (i < R) && (occorrenza == 0); i++)
    {
        for (j = 0; j < C && (occorrenza == 0); j++)
        {
            occorrenza = (*((*matrice + i) + j) == numero);

            if (occorrenza)
            {
                *i_r = i;
                *i_c = j;
            }
        }
        
    }
}

