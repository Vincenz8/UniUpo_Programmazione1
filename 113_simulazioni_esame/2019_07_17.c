#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DIM 30

void visualizza_stringa(char stringa[]);
int conta_cifre(char stringa[]);
void copia_cifre(char stringa1[], char stringa2[]);
void shift_stringa(char stringa[]);


int main(int argc, char **argv)
{
    if (argc == 2)
    {
        FILE *f;

        f = fopen(argv[1], "r");
        if(f != NULL)
        {
            char str_file[DIM];
            char str_cifre[DIM];

            if (fscanf(f, "%s", str_file) != EOF)
            {
                visualizza_stringa(str_file);

                printf("\nNumero di cifre presenti: %d\n", conta_cifre(str_file));

                copia_cifre(str_file, str_cifre);

                printf("\n");

                visualizza_stringa(str_cifre);

                printf("\n\n");

                shift_stringa(str_file);
                visualizza_stringa(str_file);

            }
            else
            {
                printf("Errore: il file e' vuoto!");
            }
        }
        else
        {
            printf("Errore: il file non e' presente!");
        }
    }
    else
    {
        printf("Errore: nessun argomento da linea di comando");
    }


    return EXIT_SUCCESS;
}

/*visualizza_stringa: visualizza a schermo una stringa contornata dal simbolo #*/
void visualizza_stringa(char stringa[])
{
    int l_stringa = (int)strlen(stringa);

    for (int j = 0; j < l_stringa + 6; j++)
    {
         printf("#");
    }

    printf("\n#  %s  #\n", stringa);

    for (int j = 0; j < l_stringa + 6; j++)
    {
         printf("#");
    }
}

/*conta_cifre: restituisce il numero di cifre presenti nella stringa*/
int conta_cifre(char stringa[])
{
    int n_cifre = 0;

    for(int i = 0; stringa[i] != '\0'; i++)
    {
        if (isdigit(stringa[i]))
        {
            n_cifre++;
        }
    }

    return n_cifre;
}

/*copia_cifre: copia le cifre presenti nella stringa1 in stringa2*/
void copia_cifre(char *stringa1, char *stringa2)
{
    for(int i = 0; (*(stringa1 + i))!= '\0'; i++)
    {
        if(isdigit((*(stringa1 + i))))
        {
            *stringa2++ = *(stringa1 + i);
        }
    }
    *stringa2 = '\0';
}

/*shift_stringa: esegue shift a sinistra sostituendo il carattere scartato con _*/
void shift_stringa(char stringa[])
{
    int l_stringa = strlen(stringa);
    char aus[l_stringa-1];

    strcpy(aus, stringa + 1);
    strcpy(stringa, aus);

    stringa[l_stringa-1] = '_';
}