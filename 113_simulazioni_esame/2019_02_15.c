#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 30
#define N_FRASI 300


int init_vettore(char vett[][DIM], char nome_file[]);
void print_vettore(char vett[][DIM], int n_stringhe);
int cerca_parola(char vett[][DIM], int n_stringhe, char parola[]);
int conta_parole(char vett[][DIM], int n_stringhe);


int main(int argc, char **argv)
{
    char stringhe[N_FRASI][DIM];

    if (argc == 2)
    {
        int frasi_caricate;
        
        frasi_caricate = init_vettore(stringhe, argv[1]);

        if (frasi_caricate > 0)
        {   
            char parola[DIM];
            int parola_presente;

            print_vettore(stringhe, frasi_caricate);

            printf("\n\nInserisci una parola da cercare: ");
            scanf("%s", parola);

            parola_presente = cerca_parola(stringhe, frasi_caricate, parola);
            printf("\nLa parola \"%s\" %s presente nel vettore di stringhe", parola, (parola_presente) ? "e'" : "non e'");

            printf("\nNumero di parole che iniziano con vocale: %d\n", conta_parole(stringhe, frasi_caricate));
        }
        else
        {
            printf("File non presente!\n");
        }
    }
    else
    {
        printf("Nessun argomento da linea di comando!\n");
    }
    
    return EXIT_SUCCESS;
}

/*init_vettore: restituisce il numero di parole caricate in un vettore da un file*/
int init_vettore(char vett[][DIM], char nome_file[])
{
    FILE *f;

    f = fopen(nome_file, "r");

    if (f == NULL)
    {
        return -1;
    }
    else
    {
        int i;

        for(i = 0; i < N_FRASI && !feof(f); i++)
        {
            fscanf(f, "%s", vett[i]);
        }
        fclose(f);
        return i;
    }
}

/*print_vettore: stampa vettore di stringhe*/
void print_vettore(char vett[][DIM], int n_stringhe)
{
    for (int i = 0; i < n_stringhe; i++)
    {
        printf("%d: %-30s", i, vett[i]);

        if( ((i+1) % 3) == 0)
        {
            printf("\n");
        }
    }   
}

/*cerca_parola: restituisce 1 se la parola e' presente nel vettore di stringhe, 0 altrimenti*/
int cerca_parola(char vett[][DIM], int n_stringhe, char parola[])
{
    for (int i = 0; i < n_stringhe; i++)
    {
        if (strcmp(parola, vett[i]) == 0)
        {
            return 1;
        }
    }
    return 0;
}

/*conta_parole: restituisce il numero di parole che iniziano per vocale*/
int conta_parole(char vett[][DIM], int n_stringhe)
{
    int v_minuscola, v_maiuscola;
    int n_parole;

    n_parole = 0;

    for (int i = 0; i < n_stringhe; i++)
    {
        v_minuscola = (vett[i][0] == 'a' || vett[i][0] == 'e' || vett[i][0] == 'i' || vett[i][0] == 'o' || vett[i][0] == 'u');
        v_maiuscola = (vett[i][0] == 'A' || vett[i][0] == 'E' || vett[i][0] == 'I' || vett[i][0] == 'O' || vett[i][0] == 'U');

        if (v_maiuscola || v_minuscola)
        {
            n_parole++;
        }
    }

    return n_parole;
}