#include <stdio.h>
#include <ctype.h>

#define DIM 30

int carica_stringa(char stringa[]);
void visualizza_stringa(char stringa[]);
void cerca_cifra(char stringa[], int* p1, int* p2);
int scrivi_file(char stringa[], char nome_file[]);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char stringa[DIM];
        int n_cifre;
        int p1, p2;
        int c_copiati;

        n_cifre = carica_stringa(stringa);
        printf("\nCifre presenti: %d\n\n", n_cifre);

        visualizza_stringa(stringa);

        cerca_cifra(stringa, &p1, &p2);
        printf("\n\np1: %d\tp2: %d\n\n", p1, p2);

        c_copiati = scrivi_file(stringa, argv[1]);
        printf("Caratteri copiati: %d", c_copiati);
    }
    else
    {
        printf("Errore: deve essere presente un argomento da linea di comando!");
        return 1;
    }
}

int carica_stringa(char stringa[])
{
    int n_cifre;

    do
    {
        n_cifre = 0;

        printf("Inserisci stringa(almeno 2 cifre presenti): ");
        scanf("%s", stringa);

        for(int i = 0; stringa[i] != '\0'; i++)
        {
            if(isdigit(stringa[i]))
            {
                n_cifre++;
            }
        }

        if(n_cifre < 2)
        {
            printf("Errore: inserire almeno 2 cifre nella stringa!\n");
        }
    } while (n_cifre < 2);

    return n_cifre;
}

void visualizza_stringa(char stringa[])
{
    printf("indici:   \t");
    for (int i = 0; stringa[i] != '\0'; i++)
    {
        printf("%d\t", i);
    }

    printf("\ncaratteri:   \t");
    for (int i = 0; stringa[i] != '\0'; i++)
    {
        printf("%c\t", stringa[i]);
    }
}

void cerca_cifra(char stringa[], int* p1, int* p2)
{
    int trovati;

    trovati = 0; //assumo falso
    *p1 = -1;
    *p2 = -1;

    for (int i = 0; stringa[i] != '\0' && !trovati; i++)
    {
        if(isdigit(stringa[i]))
        {
            if (*p1 == -1)
            {
                *p1 = i;
            }
            else
            {
                if(*p2 == -1)
                {
                    *p2 = i;
                    trovati = 1;
                }
            }
        }
    }
}

int scrivi_file(char stringa[], char nome_file[])
{
    FILE* f;
    int c_copiati;

    f = fopen(nome_file, "w");
    c_copiati = 0;

    for (int i = 0; stringa[i] != '\0'; i++)
    {
        if (!isdigit(stringa[i]))
        {
            fprintf(f, "%c", stringa[i]);

            if (stringa[i + 1] != '\0')
            {
                fprintf(f, "_");
            }
            c_copiati += 2;
        }
    }

    fclose(f);

    return (c_copiati - 1);
}