#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LUNGHEZZA 20
#define N_FRASI 5
#define FILE_TESTO "./files/es3_file.txt"


int cerca_vocali(char stringa[]);
int conta_stringhe(char stringhe[][LUNGHEZZA], char nome_file[]);
void visualizza_vett(char stringhe[][LUNGHEZZA]);


int main()
{
    char stringhe[N_FRASI][LUNGHEZZA];

    printf("Stringhe copiate: %d\n\n", conta_stringhe(stringhe, FILE_TESTO));

    visualizza_vett(stringhe);

    return EXIT_SUCCESS;
}

/*cerca_vocali: restituisce 1 se la stringa contiene almeno 3 vocali minuscole, 0 altrimenti*/
int cerca_vocali(char stringa[])
{
    char vocali[] = "aeiou";
    char aus[LUNGHEZZA];
    int str_valida = 0;

    strcpy(aus, stringa);

    for (int i = 0; i < strlen(vocali); i++)
    {
        if (str_valida == 3)
        {
            return 1;
        }
        else
        {
            // conto occorrenza vocali minuscoli usando i puntatori ed una stringa ausiliaria
            char *c_occ = strchr(aus, vocali[i]);

            while (c_occ != NULL)
            {
                str_valida++;
                *c_occ = '_';
                c_occ = strchr(aus, vocali[i]);
            }
        }
    }

    return 0;
}

/*conta_stringhe: restituisce il numero di stringhe, contenenti 3 vocali minuscole, copiate dal file. Restituisce -1 se il file non esiste.*/
int conta_stringhe(char stringhe[][LUNGHEZZA], char nome_file[])
{
    FILE *f = fopen(nome_file, "r");
    int n_stringhe = 0;

    if (f == NULL)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < N_FRASI && !feof(f); i++)
        {
            char str_file[LUNGHEZZA];
            int str_valida = 0;

            while(!str_valida && !feof(f))
            {
                fscanf(f, "%s", str_file);

                if (cerca_vocali(str_file))
                {
                    str_valida = 1;
                    strcpy(stringhe[i], str_file);
                    n_stringhe++;
                }
            }
        }
        fclose(f);
        return n_stringhe;
    }
}

/*visualizza_vett: visualizza vettore di stringhe*/
void visualizza_vett(char stringhe[][LUNGHEZZA])
{
    for (int i = 0; i < N_FRASI; i++)
    {
        printf("Stringa[%d]: %s\n", i, *(stringhe+i));
    }
}