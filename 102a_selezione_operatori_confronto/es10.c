#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta;
    float x;

    printf("Inserisci coefficiente a: ");
    scanf("%f", &a);
    printf("Inserisci coefficiente b: ");
    scanf("%f", &b);
    printf("Inserisci coefficiente c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4 * a * c); //formula discriminante 
    printf("Delta: %f\n", delta);

    if (delta > 0)
    {
        float x2;
        x = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.3f\tx2 = %.3f\n", x, x2);
    }
    else if (delta == 0)
    {
        x = -b / (2 * a);
        printf("x = %f\n", x);
    }
    else
        printf("Nessuna soluzione\n");

}