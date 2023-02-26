#include <stdio.h>

#define R 5
#define C 4

int carica_matrice(int matrice[][C], char nome_file[]);
void visualizza_matrice(int matrice[][C]);
void cerca_valore(int matrice[][C], int valore, int* riga, int* col);
int prodotto_riga(int matrice[][C], int i_riga);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int matrice[R][C];

        if(carica_matrice(matrice, argv[1]))
        {
            int valore;
            int riga, col;
            int i_riga;
            int prodotto;

            visualizza_matrice(matrice);

            printf("\nInserisci valore da cercare nella matrice: ");
            scanf("%d", &valore);

            cerca_valore(matrice, valore, &riga, &col);
            printf("\nv: %d\triga: %d\tcolonna: %d\n\n", valore, riga, col);

            printf("Inserisci indice riga: ");
            scanf("%d", &i_riga);

            prodotto = prodotto_riga(matrice, i_riga);

            printf("\nProdotto riga %d: %d", i_riga, prodotto);
        }
        else
        {
            printf("Errore: matrice non caricata!\n");
            return 2;
        }
    }
    else
    {
        printf("Errore: argomenti da linea di comando errati!\n");
        return 1;
    }
}

int carica_matrice(int matrice[][C], char nome_file[])
{
    FILE* f;

    f = fopen(nome_file, "r");

    if (f != NULL)
    {
        int n_file;
        int i;

        i = 0;

        while (fscanf(f, "%d", &n_file) != EOF && i < R)
        {
            matrice[i][0] = n_file;
            i++;
        }

        fclose(f);
        
        if (i == R)
        {
            for(i = 0; i < R; i++)
            {
                for (int j = 1; j < C; j++)
                {
                    matrice[i][j] = matrice[i][j - 1] + 1;
                }
            }

            return 1;
        }
    }

    return 0;
}

void visualizza_matrice(int matrice[][C])
{
    printf("\n\n");

    for (int i = 0; i < 2; i++)
    {
        printf(" \t \t");
        for (int j = 0; j < C; j++)
        {
            if (!i)
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
        printf("%d\t-\t", i);
        for (int j = 0; j < C; j++)
        {
            printf("%d\t", matrice[i][j]);
        }

        printf("\n");
    }

}

void cerca_valore(int matrice[][C], int valore, int* riga, int* col)
{
    int trovato;

    *riga = -1;
    *col = -1;
    trovato = 0; //assumo falso

    for (int i = 0; i < R && !trovato; i++)
    {
        for (int j = 0; j < C && !trovato; j++)
        {
            if (matrice[i][j] == valore)
            {
                *riga = i;
                *col = j;
                trovato = 1;
            }
        }
    }
}

int prodotto_riga(int matrice[][C], int i_riga)
{
    if(i_riga >= 0 && i_riga < R)
    {
        int prodotto;

        prodotto = 1;

        for (int i = 0; i < C; i++)
        {
            prodotto *= matrice[i_riga][i];
        }

        return prodotto;
    }
    else
    {
        return -1;
    }
}