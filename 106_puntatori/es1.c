#include <stdio.h>

void scambio(int *n1, int *n2);
void ordina(int *n1, int *n2, int *n3);


int main()
{
    int n1, n2, n3;

    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("n3: ");
    scanf("%d", &n3);

    ordina(&n1, &n2, &n3);

    printf("%d %d %d", n1, n2, n3);
}

/*scambio: scambia due variabili*/
void scambio(int *n1, int *n2)
{
    int tmp;

    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

/*ordina: riordina tre elementi in ordine ascendente*/
void ordina(int *n1, int *n2, int *n3)
{
    int s_effettuato = 0;

    if (*n1 > *n2)
    {
        scambio(n1, n2);
        s_effettuato = 1;
    }

    if (*n2 > *n3) 
    {
        scambio(n2, n3);
    }

    if ((*n1 > *n2) && s_effettuato)
    {
        scambio(n1, n2);
    }
}

