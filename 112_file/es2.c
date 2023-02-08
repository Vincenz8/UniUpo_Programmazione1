#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3
#define FILE_TESTO "./files/es2_file.txt"


int carica_matrice(int mat[][SIZE], char nome_file[]);
void vis_matrice(int mat[][SIZE]);

int main()
{
    int mat[SIZE][SIZE];

    carica_matrice(mat, FILE_TESTO);

    vis_matrice(mat);

}

/*carica_matrice: inizializza una matrice con i numeri presenti nel file, restituisce 1 se caricata interamente, 0 altrimenti*/
int carica_matrice(int mat[][SIZE], char nome_file[])
{
    FILE *f;

    f = fopen(FILE_TESTO, "r");

    int n = 0;
    int i = 0;

    for (i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            // controllo fine file
            if (feof(f))
            {
                return 0;
            }

            int n_valido = 0;

            // controllo se il numero e' valido e non sia a fine file
            while (!feof(f) && !n_valido)
            {
                fscanf(f, "%d", &n);

                if (n > 0 && (n % 2) == 0)
                {
                    n_valido = 1;
                    mat[i][j] = n;
                }
            }
        }
    }
    
    // se la i e' uguale a SIZE la matrice e' stata inizializzata correttamente
    if (i == SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*vis_matrice: visualizza matrice quadrata di interi*/
void vis_matrice(int mat[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%4d", mat[i][j]);
        }

        printf("\n");
    }
}