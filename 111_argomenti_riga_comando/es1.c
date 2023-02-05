#include <stdio.h>
#include <stdlib.h>

void converti_vettore(char *vett[], int vett_num[], int len_vett);
void sommatoria(int vett_num[], int len_vett, int* risultato);
int controllo_segno(int vett_num[], int len_vett);

int main(int argc, char *argv[])
{
    if (argc - 1 == 0)
    {
        exit(EXIT_SUCCESS);
    }
    else
    {
        int numeri[argc - 1];
        int segno;

        converti_vettore(argv, numeri, argc - 1);

        segno = controllo_segno(numeri, argc - 1);

        if (segno == 0)
        {
            exit(EXIT_FAILURE);
        }
        else
        {
            int risultato = 0;

            sommatoria(numeri, argc - 1, &risultato);
            
            return risultato;
        }

    }
}

/*converti_vettore: converte un vettore di stringhe in un vettore di interi*/
void converti_vettore(char *vett[], int vett_num[], int len_vett)
{
    for (int i = 0; i < len_vett; i++)
    {
        vett_num[i] = atoi(vett[i + 1]);
    }
}

/*sommatoria: restituisce sommatoria del vettore di interi*/
void sommatoria(int vett_num[], int len_vett, int* risultato)
{
    for (int i = 0; i < len_vett; i++)
    {
        *risultato += vett_num[i];
    }
}

/*controllo_segno: restituisce 1 se tutti i valori del vettore sono positivi, 0 altrimenti*/
int controllo_segno(int vett_num[], int len_vett)
{

    for (int i = 0; i < len_vett ; i++)
    {
        if (vett_num[i] < 0)
        {
            return 0;
        }
    }

    return 1;
}
