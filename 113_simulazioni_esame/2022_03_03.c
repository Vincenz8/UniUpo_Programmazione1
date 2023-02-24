#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 30

int carica_stringhe(char stringhe[][DIM], char nome_file[]);
void visualizza_stringhe(char stringhe[][DIM], int n_stringhe);
void cerca_caratteri(char stringhe[][DIM], int n_stringhe, char c, int* d1, int* d2);
int cancella_stringa(char stringhe[][DIM], int n_stringhe);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char stringhe[DIM][DIM];
        int n_stringhe;
        

        n_stringhe = carica_stringhe(stringhe, argv[1]);

        if(n_stringhe > -1)
        {
            char c;
            int d1, d2;

            visualizza_stringhe(stringhe, n_stringhe);

            printf("\n\nInserisci carattere: ");
            scanf("%c", &c);

            cerca_caratteri(stringhe, n_stringhe, c, &d1, &d2);
            printf("\ncarattere: %c\t--->\td1: %d\td2: %d", c, d1, d2);

        }
        else
        {
            printf("Errore: il file non esiste!");
            return 2;
        }

    }
    else
    {
        printf("Errore: nessun argomento da linea di comando!");
        return 1;
    }
}

int carica_stringhe(char stringhe[][DIM], char nome_file[])
{
    FILE *f;

    f = fopen(nome_file, "r");

    if (f != NULL)
    {
        int n_stringhe;
        char str_file[DIM];
        int str_valida;
        int v_occ;

        v_occ = 0;
        n_stringhe = 0;
        
        while(fscanf(f, "%s", str_file) != EOF && n_stringhe < DIM)
        {
            for(int i = 0; str_file[i] != '\0' && v_occ < 3; i++)
            {
                str_valida = (str_file[i] == 'a' || str_file[i] == 'e' || str_file[i] == 'i' || str_file[i] == 'o' || str_file[i] == 'u');

                if (str_valida)
                {
                    v_occ++;
                }
                
            }

            if(v_occ >= 3)
            {
                strcpy(stringhe[n_stringhe], str_file);
                n_stringhe++; 
            }
            
            v_occ = 0;
        }

        return n_stringhe;
    }
    else
    {
        return -1;
    }
}

void visualizza_stringhe(char stringhe[][DIM], int n_stringhe)
{
    printf("indici   \t");

    for(int i = 0; i < n_stringhe; i++)
    {
        printf("%d\t\t", i);
    }

    printf("\nstringhe\t");

    for(int i = 0; i < n_stringhe; i++)
    {
        printf("%s\t\t", stringhe[i]);
    }
}

void cerca_caratteri(char stringhe[][DIM], int n_stringhe, char c, int* d1, int* d2)
{
    int len_str;

    *d1 = -1;
    *d2 = -1;

    for (int i = 0; i < n_stringhe; i++)
    {
        len_str = strlen(stringhe[i]);

        if(stringhe[i][len_str - 1] == c)
        {
            if (*(d1) == -1)
            {
                *d1 = i;
            }
            *(d2) = i;
        }
    }
}