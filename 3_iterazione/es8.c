#include <stdio.h>

int main()
{
    int n;
    int fattoriale;

    printf("Inserisci n!: ");
    scanf("%d", &n);

    for(fattoriale = 1; n >= 1; n--)
    {
        fattoriale *= n;
    }

    printf("Fattoriale = %d\n", fattoriale);
}