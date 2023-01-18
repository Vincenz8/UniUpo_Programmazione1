#include <stdio.h>

double fatt(int n);

int main()
{
    int n = 5;
    printf("%.0f", fatt(n));
}

/*fatt: calcola il fattoriale, restituisce -1 se non calcolabile*/
double fatt(int n)
{
    double fattoriale = 1;
    int i;

    if (n < 0)
    {
        return -1;
    }

    for (i = 2; i <= n; i++)
    {
        fattoriale *= i;
    }

    return fattoriale;
}