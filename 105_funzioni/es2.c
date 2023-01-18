#include <stdio.h>

#define N 5

void init_float_vettore(float *vettore);
void somma_vettori(float *risultato, float *vettore1, float *vettore2);
void stampa_vettore(float *vettore);

int main()
{
    float vet1[N], vet2[N];
    float risultato[N];

    printf("Inserimento vettore1\n");
    init_float_vettore(vet1);
    printf("\nInserimento vettore2\n");
    init_float_vettore(vet2);

    somma_vettori(risultato, vet1, vet2);

    stampa_vettore(vet1);
    printf("\n");
    stampa_vettore(vet2);

    printf("\nRisultato\n");
    stampa_vettore(risultato);
}

/*init_float_vettore: inizializza un vettore contenente float*/
void init_float_vettore(float *vettore)
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("Inserisci n in posizione[%d]: ", i);
        scanf("%f", &vettore[i]);
    }
}

/*somma_vettori: esegue la somma tra vettori contenenti float*/
void somma_vettori(float *risultato, float *vettore1, float *vettore2)
{
    int i;

    for (i = 0; i < N; i++)
    {
        risultato[i] = vettore1[i] + vettore2[i];
    }
}

/*stampa_vettore: stampa un vettore contenente float*/
void stampa_vettore(float *vettore)
{
    int i;

    printf("[");

    for (i = 0; i < N; i++)
    {
        if (i == N-1)
        {
            printf("%.2f]", vettore[i]);
        }
        else
        {
            printf("%.2f, ", vettore[i]);
        }
    }
}