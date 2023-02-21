#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 30


void inserisci_password(char stringa[]);
void visualizza_password(char *stringa);
void scrivi_file(char stringa[], char nome_file[]);
int check_password(char stringa[], char nome_file[]);

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char stringa[DIM];
        int esito;

        inserisci_password(stringa);

        visualizza_password(stringa);

        scrivi_file(stringa, argv[1]);

        printf("\n\n");

        inserisci_password(stringa);

        esito = check_password(stringa, argv[1]);

        printf("Password %s", (esito) ? "corretta" : "errata");

    }
    else
    {
        printf("Errore: nessun argomento da linea di comando");
        return 0;
    }
}

void inserisci_password(char stringa[])
{
    int len_str;
    int n_maiuscole;

    len_str = 0;
    n_maiuscole = 0;

    while(len_str < 8 || n_maiuscole < 3)
    {
        printf("Inserisci password(almeno 8 caratteri di cui  almeno 3 maiuscole): ");
        scanf("%s", stringa);

        len_str = strlen(stringa);

        if(len_str < 8)
        {
            printf("Password non valida: almeno 8 caratteri!\n");
        }
        else
        {
            for(int i = 0; stringa[i] != '\0'; i++)
            {
                if(isupper(stringa[i]))
                {
                    n_maiuscole++;
                }
            }

            if (n_maiuscole < 3)
            {
                printf("Password non valida: almeno 3 maiuscole!\n");
                n_maiuscole = 0;
            }
        }
    }
}

void visualizza_password(char *stringa)
{
    while(*(stringa) != '\0')
    {
        printf("%c-", *(stringa));
        stringa++;
    }
}

void scrivi_file(char stringa[], char nome_file[])
{
    FILE *f;

    f = fopen(nome_file, "w");

    for(int i = 0; stringa[i] != '\0'; i++)
    {
        fprintf(f, "%c", stringa[i] + 3);
    }
    fclose(f);
}

int check_password(char stringa[], char nome_file[])
{
    FILE *f;
    char str_file[DIM];

    f = fopen(nome_file, "r");

    fscanf(f, "%c", str_file);

    fclose(f);

    if(strlen(stringa) == strlen(str_file))
    {
        for (int i = 0; stringa[i] != EOF; i++)
        {
            if((str_file[i] - 3) != stringa[i])
            {
                return 0; 
            }
        }
    }
    else
    {
        return 0;
    }

    return 1;
}
