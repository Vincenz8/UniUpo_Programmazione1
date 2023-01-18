#include <stdio.h>

#define DIM 10
#define TAPPO -1

int conta_somma_precedenti(int *vet);
void init_vettore_tappo(int *vet);
void print_vet_tappo(int *vet);

int main()
{
    int vettore[DIM];
    int n_elementi;

    init_vettore_tappo(vettore);
    printf("\n");
    printf("\n");
    print_vet_tappo(vettore); 

    n_elementi = conta_somma_precedenti(vettore);   

    printf("\nn elementi: %d", n_elementi);
}

/*conta_somma_precedenti: restituisce il numero di elementi che sono la somma dei due elementi precedenti ad essi*/
int conta_somma_precedenti(int *vet)
{
    int n = 0;

    for (int i = 2; vet[i] != TAPPO; i++)
    {
        int somma;
        somma = vet[i-2] + vet[i-1];

        if (vet[i] == somma)
        {
            n++;
        }
    } 

    return n;
}

/*init_vettore_tappo: inizializza un vettore con tappo*/
void init_vettore_tappo(int *vet)
{
    int i;

    for (i = 0; i < (DIM - 1); i++)
    {
        printf("Inserisci valore in posizione [%d](-1 per terminare): ", i);
        scanf("%d", &vet[i]);

        if (vet[i] == TAPPO)
        {
            break;
        }
    }

    if (i == (DIM - 1))
    {
        vet[i] = TAPPO;
    }
}

/*printf_vet: visualizza a schermo un vettore con tappo di interi*/
void print_vet_tappo(int *vet)
{
    int i;

    printf("[");

    for (i = 0; vet[i] != TAPPO; i++)
    {
        printf("%d, ", vet[i]);     
    }

    printf("%d]", vet[i]);
}