#include <stdio.h>
#include <stdlib.h>

#define R 5
#define C 8

void carica_matrice(int *matrice);
void visualizza_matrice(int matrice[][C]);
int cerca_valore(int matrice[][C], int valore);
int somma_colonna(int matrice[][C], int i_colonna);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int matrice[R][C];
        int valore;
        int i_colonna;
        int v_presente;
        int somma;
        FILE *f;
        
        carica_matrice(*matrice);
        visualizza_matrice(matrice);

        printf("\n\nInserisci un valore da cercare: ");
        scanf("%d", &valore);

        v_presente = cerca_valore(matrice, valore);

        printf("Inserisci indice colonna: ");
        scanf("%d", &i_colonna);

        somma = somma_colonna(matrice, i_colonna);

        f = fopen(argv[1], "w");
        fprintf(f, "Valore presente: %d\n", v_presente);
        fprintf(f, "Somma colonna: %d", somma);
        fclose(f);
    }
    return EXIT_SUCCESS;
}

/*carica_matrice: inizializza una matrice avendo i numeri di ogni riga il doppio della riga precedente*/
void carica_matrice(int *matrice)
{
    for (int i = 0; i < C; i++)
    {
        printf("Inserisci valore [0][%d]: ", i);
        scanf("%d", matrice + i);
    }

    for (int i = 1; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            *(matrice + (i * C) + j) = (*(matrice + ((i - 1) * C) + j)) * 2;
        }
    }
}

/*visualizza_matrice: visualizza a schermo matricwe di interi*/
void visualizza_matrice(int matrice[][C])
{

    for (int i = 0; i < 2; i++)
    {
        printf(" \t|\t");

        for(int j = 0; j < C; j++)
        {
            if(i == 0)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("-\t");
            }
        }
        printf("\n");
    }
    
    for (int i = 0; i < R; i++)
    {
        printf("%d\t|\t", i);

        for(int j = 0; j < C; j++)
        {
            printf("%d\t", matrice[i][j]);   
        }
        printf("\n");
    }
}

/*cerca_valore: restituisce 1 se il valore e' presente nella matrice, 0 altrimenti*/
int cerca_valore(int matrice[][C], int valore)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (matrice[i][j] == valore)
            {
                return 1;
            }
        }
    }
    return 0;
}

/*somma_colonna: se l'indice e' compatibile restituisce la sommatoria della colonna in quell'indice, -1 altrimenti */
int somma_colonna(int matrice[][C], int i_colonna)
{
    if (i_colonna > -1 && i_colonna < C)
    {
        int somma = 0;

        for (int i = 0; i < R; i++)
        {
            somma += matrice[i][i_colonna];
        }

        return somma;
    }
    else
    {
        return -1;
    }
}