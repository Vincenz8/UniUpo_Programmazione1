#include <stdio.h>

int main()
{
    int prelievo;
    int erogazione;

    printf("Somma da prelevare: ");
    scanf("%d", &prelievo);

    erogazione = 0;
    if (prelievo >=20)
    {
        if (prelievo >= 50)
        {
            int b_50 = prelievo / 50;
            prelievo = prelievo % 50;
            erogazione += 50 * b_50;
            printf("Banconote da 50: %d ", b_50); 
        }

        if (prelievo >= 20)
        {
            int b_20 = prelievo / 20;
            prelievo = prelievo % 20; 
            erogazione += 20 * b_20;
            printf("Banconote da 20: %d ", b_20);
        }

        printf("Somma erogata: %d\n", erogazione);
    }
    else
        printf("Impossibile erogare somma\n");

    

}