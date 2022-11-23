#include <stdio.h>

void main()
{
    int x, y;
    int y_pos, x_0, y_0, x_neg;

    printf("Inserisci x: ");
    scanf("%d", &x);
    printf("Inserisci y: ");
    scanf("%d", &y);

    printf("Coordinate (%d, %d)\n", x, y);

    y_pos = (y > 0);
    x_0 = (x == 0);
    y_0 = (y == 0);
    x_neg = (x < 0);

    if (x_0 && y_0)

        printf("Il punto si trova sull'origine\n");

    else if (x_0)

        printf("Il punto si trova sull'asse y\n");

    else if (y_0)

        printf("Il punto si trova sull'asse x\n");
    
    else if (x > 0 && y_pos)

        printf("Il punto si trova nel primo quadrante\n");

    else if (x_neg && y_pos)

        printf("Il punto si trova nel secondo quadrante\n");

    else if (x_neg && y < 0)

        printf("Il punto si trova nel terzo quadrante\n");

    else 

        printf("Il punto si trova nel quarto quadrante\n");
}
