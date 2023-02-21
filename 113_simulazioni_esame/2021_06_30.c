// Vincenzo Russotto 20052037
#include <stdio.h>

#define DIM 30

int carica_vettore(int numeri[], char nome_file[]);
void visualizza_valori(int numeri[]);
void somma_cifre(int numeri[], int* s1, int* s2);
void cancella_elemento(int numeri[]);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int numeri[DIM];

        if (carica_vettore(numeri, argv[1]))
        {
            int s1, s2;

            s1 = 0;
            s2 = 0;

            visualizza_valori(numeri);

            somma_cifre(numeri, &s1, &s2);
            printf("\nSomma numeri ad una cifra: %d\n", s1);
            printf("Somma numeri a due cifre: %d\n\n", s2);

            cancella_elemento(numeri);

            visualizza_valori(numeri);
        }
        else
        {
            printf("Errore: caricamento fallito!");
        }
    }
    else
    {
        printf("Errore: nessun argomento da linea di comando!");
    }
}


int carica_vettore(int numeri[], char nome_file[])
{
    FILE *f;

    f = fopen(nome_file, "r");

    if (f != NULL)
    {
        int n_file;
        int i;

        i = 0;

        while((fscanf(f, "%d", &n_file) != EOF) && i < DIM -1)
        {
            if(n_file >= 0 && ((n_file % 2) != 0))
            {
                numeri[i] = n_file;
                i++;
            }
        }

        numeri[i] = -1;

        if(numeri[0] == -1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

void visualizza_valori(int numeri[])
{
    printf("indici\t\tvalori\n");

    for (int i = 0; numeri[i] != -1; i++)
    {
        printf("%d     \t\t%d\n", i, numeri[i]);
    }
}

void somma_cifre(int numeri[], int* s1, int* s2)
{
    for (int i = 0; numeri[i] != -1; i++)
    {
        if(numeri[i] < 10)
        {
            *(s1) += numeri[i];
        }
        else if(numeri[i] < 100)
        {
            *(s2) += numeri[i];
        }
    }
}

void cancella_elemento(int numeri[])
{
    for(int i = 0; numeri[i] != -1; i++)
    {
        numeri[i] = numeri[i + 1];
    }
}