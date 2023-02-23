#include <stdio.h>

int carica_matrice(int dim_matrice, int matrice[], char nome_file[]);
void visualizza_matrice(int dim_matrice, int matrice[][dim_matrice]);
void min_max(int dim_matrice, int matrice[][dim_matrice], int i_riga, int* p1, int* p2);
void scambia_colonne(int dim_matrice, int matrice[][dim_matrice]);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int dim_matrice;
        int esito;

        printf("Inserisci dimensione della matrice quadrata: ");
        scanf("%d", &dim_matrice);

        int matrice[dim_matrice][dim_matrice];

        esito = carica_matrice(dim_matrice, *(matrice), argv[1]);
        
        if (esito)
        {
            int i_riga;
            int p1, p2;

            visualizza_matrice(dim_matrice, matrice);

            printf("\n\nInserisci indice riga: ");
            scanf("%d", &i_riga);

            min_max(dim_matrice, matrice, i_riga, &p1, &p2);
            printf("\n\np1: %d\tp2: %d", p1, p2);

            printf("\n\n");
            scambia_colonne(dim_matrice, matrice);
            visualizza_matrice(dim_matrice, matrice);


        }
        else
        {
            printf("Errore: matrice non caricata!");
            return 2;
        }
    }
    else
    {
        printf("Errore: nessun argomento da linea di comando!");
        return 1;
    }
    return 0;
}

int carica_matrice(int dim_matrice, int matrice[], char nome_file[])
{
    FILE *f;

    f = fopen(nome_file, "r");


    if (f != NULL)
    {
        int n_file;
        int i;

        i = 0;

        while ((fscanf(f, "%d", &n_file) != EOF) && (i < (dim_matrice * dim_matrice)))
        {

            if (n_file >= 0 && (n_file % 2) == 0)
            {
                *(matrice + i) = n_file;
                i++;
            }
        }

        if (i == (dim_matrice * dim_matrice))
        {
            return 1;
        }
    }

    return 0;   
}

void visualizza_matrice(int dim_matrice, int matrice[][dim_matrice])
{
    for (int i = 0; i < 2; i++)
    {
        printf(" \t \t");
        for (int j = 0; j < dim_matrice; j++)
        {
            if (i == 0)
            {
                printf("%d%c", j, (j < (dim_matrice - 1)) ? '\t' : '\n');
            }
            else
            {
                printf("_%c", (j < (dim_matrice - 1)) ? '\t' : '\n');
            }
        }
    }

    for (int i = 0; i < dim_matrice; i++)
    {
        printf("%d \t|\t", i);

        for (int j = 0; j < dim_matrice; j++)
        {
            printf("%d%c", matrice[i][j], (j < (dim_matrice - 1)) ? '\t' : '\n');
        }
    }
}

void min_max(int dim_matrice, int matrice[][dim_matrice], int i_riga, int* p1, int* p2)
{
    if (i_riga > -1 && i_riga < dim_matrice)
    {

        *p1 = matrice[i_riga][0];
        *p2 = matrice[i_riga][0];

        for (int i = 1; i < dim_matrice; i++)
        {
            *p1 = (*(p1) > matrice[i_riga][i]) ? matrice[i_riga][i] : *p1;
            *p2 = (*(p2) < matrice[i_riga][i]) ? matrice[i_riga][i] : *p2;
        }
    }
    else
    {
        *p1 = -1;
        *p2 = -1;
    }
}

void scambia_colonne(int dim_matrice, int matrice[][dim_matrice])
{
    int aus;

    for (int i = 0; i < dim_matrice; i++)
    {
        aus = matrice[i][0];
        matrice[i][0] = matrice[i][dim_matrice - 1];
        matrice[i][dim_matrice - 1] = aus;
    }
}