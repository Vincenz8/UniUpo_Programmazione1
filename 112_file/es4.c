#include <stdio.h>
#include <stdlib.h>

#define FILE_TESTO "./files/es4_file.txt"
#define DIM 20

int controllo_multiplo(int n1, int n2);
int init_vettore(int v[], char nome_file[], int n);
void print_vet_tappo(int vett[]);

int main()
{   
    int vett[DIM];

    printf("File presente: %d\n", init_vettore(vett, FILE_TESTO, 3));

    print_vet_tappo(vett);

    return EXIT_SUCCESS;
}

/*controllo_multiplo: restituisce 1 se n1 e' positivo e multiplo di n2, altrimenti restituisce 0*/
int controllo_multiplo(int n1, int n2)
{
    if (n1 > 0 && (n1 % n2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*init_vettore: copia in un vettore, i numeri positivi e multipli di n, presenti nel file. Restituisce 1 se il file e' presente, 0 altrimenti.*/
int init_vettore(int v[], char nome_file[], int n)
{
    FILE *f;

    f = fopen(nome_file, "r");

    if (f == NULL)
    {
        return 0;
    }
    else
    {
        int i;

        for (i = 0; i < (DIM - 1) && !feof(f); i++)
        {
            int n_valido = 0;
            int n_file;

            while(!n_valido && !feof(f))
            {
                fscanf(f, "%d", &n_file);

                if (controllo_multiplo(n_file, n))
                {
                    v[i] = n_file;
                    n_valido = 1;
                }
            }
        }

        v[i] = -1;
        fclose(f);

        return 1;
    }
    
}

/*printf_vet: visualizza a schermo un vettore con tappo di interi*/
void print_vet_tappo(int vett[])
{
    int i;

    printf("[");

    for (i = 0; vett[i] != -1; i++)
    {
        printf("%d, ", vett[i]);     
    }

    printf("%d]", vett[i]);
}