#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 30
#define VOCALI "aeiou"

int carica_stringa(char stringa[]);
void conta_caratteri(char stringa[], int len_stringa, int* p1, int* p2);
int aggiungi_carattere(char stringa[], int len_stringa, char c, int indice);
void scrivi_file(char stringa[], int len_stringa, char nome_file[]);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char stringa[DIM];
        char c;
        int len_str;
        int p1, p2;
        int indice;

        len_str = carica_stringa(stringa);
        printf("\nStringa: %s\tLunghezza: %d\n", stringa, len_str);

        conta_caratteri(stringa, len_str, &p1, &p2);
        printf("\np1: %d\tp2: %d\n", p1, p2);

        printf("\nInserisci carattere da aggiungere: ");
        scanf(" %c", &c);

        printf("\nInserisci indice: ");
        scanf("%d", &indice);

        aggiungi_carattere(stringa, len_str, c, indice);
        printf("\nStringa: %s\tLunghezza: %d\n", stringa, (int)strlen(stringa));   

        scrivi_file(stringa, len_str, argv[1]);
    }
    else
    {
        printf("Errore: nessun argomento da linea di comando!");
    }
}

int carica_stringa(char stringa[])
{
    int len_str;

    len_str = 1;

    while((len_str % 2 )!= 0)
    {
        printf("Inserisci stringa(numero pari di caratteri): ");
        scanf("%s", stringa);

        len_str = strlen(stringa);

        if((len_str % 2 )!= 0)
        {
            printf("Stringa non valida: deve contenere un numero pari di caratteri!\n");
        }
    }

    return len_str;
}

void conta_caratteri(char stringa[], int len_stringa, int* p1, int* p2)
{
    *p1 = 0;
    *p2 = 0;

    for (int i = 0; i < len_stringa; i++)
    {
        if(islower(stringa[i]) && (strchr(VOCALI, stringa[i]) != NULL))
        {
            (*p1)++;
        }

        if(isdigit(stringa[i]))
        {
            (*p2)++;
        }
    }
}

int aggiungi_carattere(char stringa[], int len_stringa, char c, int indice)
{
    if (indice < len_stringa)
    {
        for (int i = len_stringa; i > indice; i--)
        {
            stringa[i] = stringa[i - 1];
        }

        stringa[len_stringa + 1] = '\0';
        stringa[indice] = c;
    }

    return strlen(stringa);
}

void scrivi_file(char stringa[], int len_stringa, char nome_file[])
{
    FILE *f;

    f = fopen(nome_file, "w");

    for (int i = 0; i < len_stringa / 2; i++)
    {
        fprintf(f, "%c", stringa[i]);
    }

    fclose(f);
}