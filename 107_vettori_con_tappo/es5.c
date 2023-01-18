#include <stdio.h>

#define DIM 10
#define TAPPO -1

int k_occorrenza_valore(int valore, int k_occ, int *vet);
void init_vettore_tappo(int *vet);
void print_vet_tappo(int *vet);


int main()
{
    int vettore[DIM];
    int valore;
    int k_occ;
    int i_occ;

    init_vettore_tappo(vettore);
    printf("\n");
    printf("\n");
    print_vet_tappo(vettore);

    printf("\n");
    printf("\n");
    printf("Inserisci valore da cercare: ");
    scanf("%d", &valore);

    printf("Inserisci occorrenza di valore: ");
    scanf("%d", &k_occ);

    i_occ = k_occorrenza_valore(valore, k_occ, vettore);
    printf("\n");
    printf("valore: %d\nk_occ: %d\ni_occ: %d", valore, k_occ, i_occ);
}

/*k_occorrenza_valore: restituisce l'indice della k-esima occorrenza di valore nel vettore.
-1 se il valore non e' presente oppure vi sono meno occorrenze di k_occ*/
int k_occorrenza_valore(int valore, int k_occ, int *vet)
{
    for(int i = 0; vet[i] != TAPPO; i++)
    {
        if (vet[i] == valore)
        {
            k_occ--;
        }

        if (!k_occ)
        {
            return i;
        }
    }

    return -1;
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