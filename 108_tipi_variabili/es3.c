#include <stdio.h>

void carica_ascii_matrix(char (*tabella)[8]);
void print_ascii(char (*tabella)[8]);

int main()
{
    char tab_ascii[8][8];

    carica_ascii_matrix(tab_ascii);
    print_ascii(tab_ascii);
}

/*carica_ascii_matrix: inizializza una matrice di caratteri 8x8 dall'A maiuscola alla z minuscola*/
void carica_ascii_matrix(char (*tabella)[8])
{
    char lettera = 'A';
    char caratteri[] = "0123456789()";
    int k = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (lettera <= 'Z')
            {
                tabella[i][j] = lettera++;
            }
            else if (lettera <= 't')
            {
                tabella[i][j] = (lettera++) + 6;
            }
            else if(i >= 6)
            {
                tabella[i][j] = caratteri[k++];
            }
        }
    }
}

/*print_ascii: visualizza una mini tabella ascii */
void print_ascii(char (*tabella)[8])
{
    printf("-------------------------------------------------\n");

    for (int i = 0; i < 8; i++)
    {
        printf("|");

        for (int j = 0; j < 8; j++)
        {
            printf("%c %3d|", tabella[i][j], (int) tabella[i][j]);
        }
        
        printf("\n");
    }

    printf("-------------------------------------------------\n");
}