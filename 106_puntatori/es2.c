#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* init_vet();
void print_vet(int *vet);
void find_valore(int valore, int *vet, int *p_occ, int *u_occ); 

int main()
{
    int *vet = init_vet();
    int p_occ, u_occ;
    int valore;

    print_vet(vet);
    printf("\n");

    printf("Valore da cercare: ");
    scanf("%d", &valore);

    find_valore(valore, vet, &p_occ, &u_occ);

    printf("valore: %d p_occ: %d, u_occ: %d", valore, p_occ, u_occ);

}


#define DIM 10
/*init_vet: inizializza un vettore con numeri pseudo casuali da 1 cifra*/
int* init_vet()
{
    static int vet[DIM];

    srand(time(NULL));
    for(int i = 0; i < DIM; i++)
    {
        vet[i] = rand()%10;
    }

    return vet;
}

/*printf_vet: visualizza a schermo un vettore di interi*/
void print_vet(int *vet)
{
    printf("[");

    for (int i = 0; i < DIM; i++)
    {
        if (i == DIM - 1)
        {
            printf("%d]", vet[i]);
        }
        else
        {
            printf("%d, ", vet[i]);
        }        
    }
}

/*find_valore: restituisce la prima e l'ultima occorenza di un valore all'interno di un vettore*/
void find_valore(int valore, int *vet, int *p_occ, int *u_occ)
{
    *p_occ = *u_occ = -1;

    for (int i = 0; i < DIM; i++)
    {
        if ((vet[i] == valore) && (*p_occ == -1))
        {
            *p_occ = *u_occ = i;
        }
        if (vet[i] == valore)
        {
            *u_occ = i;
        }
    }
    
    if ((*p_occ > -1) && (*u_occ == -1))
    {
        *u_occ = *p_occ;
    }
}