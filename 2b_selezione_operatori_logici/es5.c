#include <stdio.h>

void main(){

    int x, y;

    printf("Inserisci x: ");
    scanf("%d", &x);
    printf("Inserisci y: ");
    scanf("%d", &y);

    printf("Coordinate (%d, %d)\n", x, y);

    if (x == 0 && y == 0)

        printf("Il punto si trova sull'origine\n");

    else if (x == 0)

        printf("Il punto si trova sull'asse y\n");

    else if (y == 0)

        printf("Il punto si trova sull'asse x\n");
    
    else if (x > 0 && y > 0)

        printf("Il punto si trova nel primo quadrante\n");

    else if (x < 0 && y > 0)

        printf("Il punto si trova nel secondo quadrante\n");

    else if (x < 0 && y < 0)

        printf("Il punto si trova nel terzo quadrante\n");

    else 

        printf("Il punto si trova nel quarto quadrante");

}
