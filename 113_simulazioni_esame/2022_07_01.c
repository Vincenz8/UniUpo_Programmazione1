#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 11


int carica_vettori(int numeri[], int n_valori, int q);
void visualizza_vettore(int numeri[]);
void cerca_minimo(int numeri[], int* p1, int* p2);
int scrivi_file(int numeri[], char nome_file[]);

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int numeri[DIM];

        if(carica_vettori(numeri, DIM, atoi(argv[1])))
        {
            int p1, p2;
            int v_copiati;

            visualizza_vettore(numeri);

            cerca_minimo(numeri, &p1, &p2);

            printf("p1: %d\tp2:%d\n\n", p1, p2);

            v_copiati = scrivi_file(numeri, argv[2]);

            printf("Valori copiati nel file: %d", v_copiati);
        }
        else
        {
            printf("Errore: caricamento non avvenuto!");
            return 2;
        }
        
        return 0;
    }
    else
    {
        printf("Errore: argomenti da linea di comando non corretti!");
        return 1;
    }
}

int carica_vettori(int numeri[], int n_valori, int q)
{
    if (q >= 2 && q < (n_valori - 1))
    {
        int i;

        srand(time(NULL));

        for (i = 0; i < q; i++)
        {

            numeri[i] = (rand() % 990) + 10;
        }

        numeri[i] = -1;

        return 1;
    }
    else
    {
        return 0;
    }
}

void visualizza_vettore(int numeri[])
{
    printf("\n\nindici: \t");
    for (int i = 0; numeri[i] != -1; i++)
    {
        printf("%d\t", i);
    }

    printf("\nvalori:\t\t");
    for (int i = 0; numeri[i] != -1; i++)
    {
        printf("%d\t", numeri[i]);
    }
        printf("\n\n");
}

void cerca_minimo(int numeri[], int* p1, int* p2)
{
    *p1 = numeri[1];
    *p2 = numeri[0];

    for (int i = 0; numeri[i] != -1; i++)
    {
        if((i % 2) != 0)
        {
            *p1 = (*(p1) > numeri[i]) ? numeri[i] : *p1;

        }
        else
        {
            *p2 = (*(p2) > numeri[i]) ? numeri[i] : *p2;
        }
    }
}

int scrivi_file(int numeri[], char nome_file[])
{
    int v_copiati;
    FILE *f;

    v_copiati = 0;

    f = fopen(nome_file, "w");

    for(int i = 0; numeri[i] != -1; i++)
    {
        if(numeri[i] >= 10 && numeri[i] < 100)
        {
            fprintf(f, "%d\t", numeri[i]);
            v_copiati++;
        }
    }

    fclose(f);

    return v_copiati;
}

