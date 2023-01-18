#include <stdio.h>
#include <ctype.h>

void visualizza_vet(char **stringhe);
void conta_maiu_min(char **stringhe, int* c_maiu, int* c_min);
void conta_carat(char **stringhe, char carattere, int* occ_carattere);

#define N 3

int main()
{
    char* stringhe[N] = {"Carlo conquista", "Carlo mangia", "Carlo canta"};
    char carattere;
    int c_maiu, c_min, occ_carattere;

    printf("Inserisci carattere: ");
    scanf("%c", &carattere);
    puts("");

    visualizza_vet(stringhe);

    c_maiu = c_min = 0;
    occ_carattere = 0;

    conta_maiu_min(stringhe, &c_maiu, &c_min);
    conta_carat(stringhe, carattere, &occ_carattere);

    printf("Nel vettore sono presenti:\nStringhe maiuscole: %d\nStringhe minuscole: %d\n", c_maiu, c_min);
    printf("Occorrenze di \"%c\": %d", carattere, occ_carattere);

}

/*visualizza_vet: visualizza un vettore di stringhe*/
void visualizza_vet(char **stringhe)
{
    for (int i = 0; i < 3; i++)
    {
        printf("stringa[%d]: %s\n", i, stringhe[i]);
    }
}

/*conta_maiu_min: conta il numero di stringhe che iniziano con la lettera minuscola e maiuscola*/
void conta_maiu_min(char **stringhe, int* c_maiu, int* c_min)
{
    for (int i = 0; i < N; i++)
    {
        if (isupper(stringhe[i][0]))
        {
            (*c_maiu)++;
        }
        else
        {
            (*c_min)++;
        }
    }
}

/*conta_carat: conta tutte le occorrenze presenti di un carattere in un vettore di stringhe*/
void conta_carat(char **stringhe, char carattere, int* occ_carattere)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; stringhe[i][j] != '\0'; j++)
        {
            if (stringhe[i][j] == carattere)
            {
                (*occ_carattere)++;
            }
        }
    }
}