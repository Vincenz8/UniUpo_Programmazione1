//matricola 20052037 Vincenzo russotto
#include <stdio.h>
#include <stdlib.h>

void carica_matrice(int dim, int mat[][dim]);
void visualizza_matrice(int dim, int mat[][dim]);
void media_somma(int dim, int (*mat)[dim], int* p1, float* p2);
int scrivi_file(int dim, int mat[][dim], char nome_file[], int q);

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int dim;
        int q;
        int p1;
        float p2;

        dim = atoi(argv[1]);
        int mat[dim][dim];

        carica_matrice(dim, mat);
        visualizza_matrice(dim, mat);

        media_somma(dim, mat, &p1, &p2);

        printf("\n\nLa somma della riga 0 e della colonna 0 e’ %d\n", p1);
        printf("La media della riga 0 e della colonna 0 e’ %.3f\n\n", p2);

        printf("Inserire numero di righe della matrice da copiare nel file: ");
        scanf("%d", &q);

        if(scrivi_file(dim, mat, argv[2], q))
        {
            printf("\nCopia su file avvenuta\n");
            return 0;
        }
        else
        {
            printf("ERRORE: copia su file fallita!\n");
            return 2;
        }

    }
    else
    {
        printf("ERRORE: numero di parametri non corretto!\n");
        return 1;
    }
}

/*carica_matrice: inizializza una matrice quadrata con multipli di un valore inseriti da tastiera*/
void carica_matrice(int dim, int mat[][dim])
{
    int x;
    int k;

    do {
        printf("Inserisci valore intero: ");
        scanf("%d", &x);
	// x strettamente positivo
        if (!(x >= 0) || !(x < 10))   // x>0					(-1)
        {
            printf("ERRORE: il valore non è corretto\n");
        }
    } while(!(x >= 0) || !(x < 10));  // x>0

    k = 1;

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            mat[i][j] = x * k;
            k++;
        }
    }
}

/*visualizza_matrice: visualizza nel terminale una matrice quadrata*/
void visualizza_matrice(int dim, int mat[][dim])
{
    printf("\n\n");

    for (int i = 0; i < 2; i++)
    {
        printf(" \t \t");

        for (int j = 0; j < dim; j++)
        {
            if (!i)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < dim; i++)
    {
        printf("%d\t*\t", i);

        for (int j = 0; j < dim; j++)
        {
            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }
}

/*media_somma: assegna a p1 la somma dei valori della prima riga e prima colonna
ed a p2 la media aritmetica dei valori della prima riga e della prima colonna*/
void media_somma(int dim, int (*mat)[dim], int* p1, float* p2)
{
    *(p1) = *(*(mat)); 

    for (int i = 1; i < dim; i++)
    {
        *(p1) += *(*(mat) + i)  + *(*(mat + i)); 
    }

    *(p2) = *(p1) / ((float)((dim * 2) - 1));
}

/*scrivi_file: restituisce 1 se le righe della matrice vengono copiate sul file, 0 altrimenti*/
int scrivi_file(int dim, int mat[][dim], char nome_file[], int q)
{
    if (q > 0 && q <= dim)
    {
        FILE* f;

        f = fopen(nome_file, "w");

        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < dim; j++)
            {
                fprintf(f, "%d\t", mat[i][j]);
            }
            fprintf(f, "\n");
        }

        fclose(f);
        return 1;
    }

    return 0;
}
