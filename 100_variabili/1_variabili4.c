#include <stdio.h>

int main()
{
    float x, y, h;
    float area_trapezio;

    printf("Inserisci base1: ");
    scanf("%f", &x);
    printf("Inserisci base2: ");
    scanf("%f", &y);
    printf("Inserisci Altezza: ");
    scanf("%f", &h);

    area_trapezio = ((x + y) * h) / 2;

    printf("Area = %f\n", area_trapezio);
}