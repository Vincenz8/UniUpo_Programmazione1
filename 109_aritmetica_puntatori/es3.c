#include <stdio.h>

void init_riga(int* prima_riga);
void init_matrice(int* matrice);
void visualizza_matrice(int* matrice);

#define R 6
#define C 6

int main()
{
    int matrice[R][C];

    init_riga(*(matrice));
    init_matrice(*(matrice));
    
    puts("");
    visualizza_matrice(*(matrice));
}

/*init_riga: inizializza la prima riga di una matrice*/
void init_riga(int* prima_riga)
{
    for (int i = 0; i < R; i++)
    {
        printf("Inserisci n in posizione[0][%d]: ", i);
        scanf("%d", (prima_riga + i));
    }    
}

/*init_matrice: inizializza il resto della matrice*/
void init_matrice(int* matrice)
{
    for (int i = 1; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            *(matrice + (i * C) + j) = (*(matrice + ((i - 1) * C) + j)) + 1;
        }
    }
}

/*visualizza_matrice: visualizza una matrice*/
void visualizza_matrice(int* matrice)
{
    int i, j;

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d\t", *(matrice + (i * C) + j));
        }

        printf("\n");
    }
}
