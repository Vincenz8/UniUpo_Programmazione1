#include <stdio.h>

#define DIM 30


int carica_vettore(int numeri[], char nome_file[], int x);
void visualizza_vettore(int numeri[]);
void cerca_pari(int numeri[], int* d1, int* d2);
void copia_valori(int numeri[], int numeri2[]);

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int numeri[DIM];
        int numeri2[DIM];
        int valore;

        printf("Inserisci valore: ");
        scanf("%d", &valore);

        if(carica_vettore(numeri, argv[1], valore))
        {
            int d1, d2;
            visualizza_vettore(numeri);

            cerca_pari(numeri, &d1, &d2);

            printf("\n\nd1: %d\td2: %d\n\n", d1, d2);

            copia_valori(numeri, numeri2);

            visualizza_vettore(numeri2);
        }
        else
        {
            printf("Errore: vettore non caricato!");
            return 2;
        }

    }
    else
    {
        printf("Errore: nessun argomento da linea di comando!\n");
        return 1;
    }
}

int carica_vettore(int numeri[], char nome_file[], int x)
{
    FILE *f;

    f = fopen(nome_file, "r");

    if (f != NULL)
    {
        int n_file;
        int i;

        i = 0;

        while(fscanf(f, "%d", &n_file) != EOF && i < DIM - 1)
        {
            if(n_file >= 0 && (n_file % x) == 0)
            {
                numeri[i] = n_file;
                i++;
            }
        }

        fclose(f);
        numeri[i] = -1;

        return 1;
    }
    
    return 0;
}

void visualizza_vettore(int numeri[])
{
    if(numeri[0] == -1)
    {
        printf("Errore: vettore vuoto");
    }
    else
    {
        printf("indici  \t");
        for (int i = 0; numeri[i] != -1; i++)
        {
            printf("%d \t", i);
        }

        printf("\nvalori\t\t");
        for (int i = 0; numeri[i] != -1; i++)
        {
            printf("%d\t", numeri[i]);
        }
    }

}

void cerca_pari(int numeri[], int* d1, int* d2)
{
    *d1 = -1;
    *d2 = -1;

    for (int i = 0; numeri[i] != -1; i++)
    {
        if((numeri[i] % 2) == 0)
        {
            if(*d1 == -1)
            {
                *d1 = i;
            }

            *d2 = i;
        }
    }
}

void copia_valori(int numeri[], int numeri2[])
{
    int len_numeri;
    int i;

    for(len_numeri = 0; numeri[len_numeri] != -1; len_numeri++);

    for(i = 0; i < (len_numeri / 2); i++)
    {
        numeri2[i] = numeri[i];
    }

    numeri2[i] = -1;
}