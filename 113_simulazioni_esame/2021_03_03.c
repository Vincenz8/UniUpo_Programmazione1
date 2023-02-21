#include <stdio.h>
#include <string.h>

#define DIM 20
#define N_STR 30
#define VOCALI "aeiouAEIOU"

int carica_stringhe(char stringhe[][DIM], FILE *f);
void visualizza_stringhe(char stringhe[][DIM], int n_str);
int cerca_str(char stringhe[][DIM], int n_stringhe, char stringa[]);
void aggiungi_stringa(char stringhe[][DIM], int n_stringhe, char stringa[]);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        FILE *f;

        f = fopen(argv[1], "r");

        if (f != NULL)
        {
            char stringhe[N_STR][DIM];
            char str[DIM];

            int n_stringhe;

            n_stringhe = carica_stringhe(stringhe, f);
            fclose(f);

            visualizza_stringhe(stringhe, n_stringhe);

            printf("\n\nInserisci parola da cercare: ");
            scanf("%s", str);

            printf("La stringa e' %d\n\n", cerca_str(stringhe, n_stringhe, str));

            printf("\n\nInserisci parola da aggiungere: ");
            scanf("%s", str);

            aggiungi_stringa(stringhe, n_stringhe, str);

            printf("\n\n");
            visualizza_stringhe(stringhe, n_stringhe + 1);
        }
        else
        {
            printf("Errore: impossibile aprire il file");
        }
    }
    else
    {
        printf("Errore: nessun argomento!");
    }
    return 0;
}

int carica_stringhe(char stringhe[][DIM], FILE *f)
{
    char str_file[DIM];
    int i;

    i = 0;

    while ((fscanf(f, "%s", str_file) != EOF) && i < N_STR)
    {
        if ((strchr(VOCALI, str_file[0]) != NULL) && strlen(str_file) >= 4)
        {
            strcpy(stringhe[i], str_file);
            i++;
        }
    }

    return i;
}

void visualizza_stringhe(char stringhe[][DIM], int n_str)
{
    for (int i = 0; i < n_str; i++)
    {
        printf("%d) %s %c ", i, stringhe[i], (i < n_str - 1) ? '-' : '\0');
    }
}

int cerca_str(char stringhe[][DIM], int n_stringhe, char stringa[])
{
    int i;
    int i_occ = -1;

    for (i = 0; i < n_stringhe; i++)
    {
        if(strcmp(stringhe[i], stringa) == 0)
        {
            i_occ = i;
        }
    }

    return i_occ;
}

void aggiungi_stringa(char stringhe[][DIM], int n_stringhe, char stringa[])
{
    for (int i = n_stringhe; i > 3; i--)
    {
        strcpy(stringhe[i], stringhe[i - 1]);
    }
    strcpy(stringhe[3], stringa);
}