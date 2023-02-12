#include <stdio.h>
#include <stdlib.h>

#define DIM 30

void carica_vettore(int vett[], char nome_file[]);
void visualizza_vettore(int vett[]);
int cerca_minimo(int vett[]);
void copia_vettore(int *vett, int *vett2);

int main(int argc, char **argv)
{
    int vett1[DIM], vett2[DIM];

    if (argc == 2)
    {
        carica_vettore(vett1, argv[1]);
        visualizza_vettore(vett1);

        printf("\n\nIl numero minimo del primo vettore e' %d\n\n", cerca_minimo(vett1));

        copia_vettore(vett1, vett2);
        visualizza_vettore(vett2);

        printf("\n\nIl numero minimo del secondo vettore e' %d", cerca_minimo(vett2));

    }
    
    return EXIT_SUCCESS;
}

/*carica_vettore: inizializza un vettore-tappo con numeri presenti in un file*/
void carica_vettore(int vett[], char nome_file[])
{
    FILE *f;
    int i;

    f= fopen(nome_file, "r");

    if (f != NULL)
    {
        for(i = 0; !feof(f); i++)
        {
            fscanf(f, "%d", &vett[i]);
        }

        fclose(f);
        vett[i] = -1;
    }
}

/*visualizza_vettore: visualizza a schermo un vettore-tappo*/
void visualizza_vettore(int vett[])
{
    for(int i = 0; vett[i] != -1; i++)
    {
        printf("%d: %d ", i, vett[i]);
    }
}

/*cerca_minimo: restituisce il valore minimo presente nel vettore*/
int cerca_minimo(int vett[])
{
    int min;

    min = vett[0];

    for (int i = 1; vett[i] != -1; i++)
    {
        min = (vett[i] < min) ? vett[i] : min;
    }

    return min;
}

/*copia_vettore: copia in un secondo vettore i numeri composti da due cifre*/
void copia_vettore(int *vett, int *vett2)
{
    int n_valido;
    int i;

    for (i = 0; *(vett + i) != -1; i++)
    {
        n_valido = ((*(vett + i) < 100) && (*(vett + i) >= 10));

        if(n_valido)
        {
            *(vett2++) = *(vett + i); 
        }
    }

    *(vett2) = -1;
}