#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define DIM 30

void carica_vettore(char stringhe[][DIM], int n_stringhe);
void visualizza_vettore(char stringhe[][DIM], int n_stringhe);
void conta_vocali(char stringhe[][DIM], int n_stringhe, int* p1, int* p2);
int scrivi_file(char stringhe[][DIM], int n_stringhe, char nome_file[]);

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int n_stringhe;

        n_stringhe = atoi(argv[1]);

        if (n_stringhe > 0)
        {
            char stringhe[n_stringhe][DIM];
            int p1, p2;
            int s_copiate;

            carica_vettore(stringhe, n_stringhe);
            visualizza_vettore(stringhe, n_stringhe);

            conta_vocali(stringhe, n_stringhe, &p1, &p2);
            printf("p1: %d\tp2: %d\n\n", p1, p2);

            s_copiate = scrivi_file(stringhe, n_stringhe, argv[2]);

            printf("Stringhe copiate: %d\n", s_copiate);

        }
        else
        {
            printf("Errore: il numero di stringhe deve essere almeno 1!");
            return 2;
        }
    }
    else
    {
        printf("Errore: devono essere passati due argomenti da linea di comando!");
        return 1;
    }
}

void carica_vettore(char stringhe[][DIM], int n_stringhe)
{
    int v_maiu, v_min;
    int l_str;

    do
    {
        printf("Inserisci stringa[0]: ");
        scanf("%s", stringhe[0]);

        l_str = strlen(stringhe[0]);

        v_maiu = (stringhe[0][0] == 'A' || stringhe[0][0] == 'E' || stringhe[0][0] == 'I' || stringhe[0][0] == 'O' || stringhe[0][0] == 'U');
        v_min = (stringhe[0][l_str - 1] == 'a' || stringhe[0][l_str - 1] == 'e' || stringhe[0][l_str - 1] == 'i' || stringhe[0][l_str - 1] == 'o' || stringhe[0][l_str - 1] == 'u');

        if(!v_maiu || !v_min)
        {
            printf("Errore: la prima lettera deve essere una vocale maiuscola e L'ultima una vocale minuscola!\n");
        }

    } while (!v_maiu || !v_min);

    for(int i = 1; i < n_stringhe; i++)
    {
        strcpy(stringhe[i], stringhe[i - 1]);
        stringhe[i][l_str - 1]++;
    }
}

void visualizza_vettore(char stringhe[][DIM], int n_stringhe)
{
    printf("\n\nindici  \t");
    for(int i = 0; i < n_stringhe; i++)
    {
        printf("%d\t\t", i);
    }

    printf("\nstringhe  \t");
    for (int i = 0; i < n_stringhe; i++)
    {
        printf("%s\t\t", stringhe[i]);
    }

    printf("\n\n");
}

void conta_vocali(char stringhe[][DIM], int n_stringhe, int* p1, int* p2)
{
    int v_maiu, v_min;

    *(p1) = n_stringhe;
    *(p2) = 0;

    for (int i = 0; i < n_stringhe; i++)
    {
        for (int j = 1; stringhe[i][j] != '\0'; j++)
        {

            v_maiu = (stringhe[i][j] == 'A' || stringhe[i][j] == 'E' || stringhe[i][j] == 'I' || stringhe[i][j] == 'O' || stringhe[i][j] == 'U');
            v_min = (stringhe[i][j] == 'a' || stringhe[i][j] == 'e' || stringhe[i][j] == 'i' || stringhe[i][j] == 'o' || stringhe[i][j] == 'u');        

            if (v_maiu)
            {
                (*p1)++;
            }  
            else if (v_min)
            {
                (*p2)++;
            }    
        }
    }
}

int scrivi_file(char stringhe[][DIM], int n_stringhe, char nome_file[])
{
    FILE *f;
    int v_min;
    int u_carat;
    int s_copiate;

    f = fopen(nome_file, "w");
    s_copiate = 0;

    for (int i = 0; i < n_stringhe; i++)
    {
        u_carat = strlen(stringhe[i]) - 1;
        v_min = (stringhe[i][u_carat] == 'a' || stringhe[i][u_carat] == 'e' || stringhe[i][u_carat] == 'i' || stringhe[i][u_carat] == 'o' || stringhe[i][u_carat] == 'u'); 

        if(v_min)
        {
            fprintf(f, "%s ", stringhe[i]);
            s_copiate++;
        }
    }

    fclose(f);

    return s_copiate;
}

