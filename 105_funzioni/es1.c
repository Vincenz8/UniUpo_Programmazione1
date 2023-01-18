# include <stdio.h>

// prototipi delle funzioni
float area_cerchio(float raggio);
float area_quadrato(float lato);

int main()
{
    float area;
    float n;
    int selezione;
    char l_or_r;

    printf("Quale area vuoi calcolare?\n[0]Cerchio\n[1]Quadrato\nOpzione: ");
    scanf("%d", &selezione);

    l_or_r = (selezione == 0) ? 'r':'l'; 
    printf("Inserisci %c: ", l_or_r);
    scanf("%f", &n);

    if (n > 0)
    {
        if (selezione == 0)
        {
            area = area_cerchio(n);
        }
        else
        {
            area = area_quadrato(n);
        }

        printf("Area = %f", area);

    }
    else
    {
        printf("Errore numero negativo");
    }
}

/*area_quadrato: calcola l'area del quadrato*/
float area_quadrato(float lato)
{
    return lato * lato;
}

#define PI 3.14

/*area_cerchio: calcola l'area del cerchio*/
float area_cerchio(float raggio)
{
    return 2 * PI * raggio;
}