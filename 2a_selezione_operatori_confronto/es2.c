#include <stdio.h>

void main(){

    int n1, n2;
    int n_max;

    printf("Inserisci numero1: ");
    scanf("%d", &n1);
    printf("Inserisci numero2: ");
    scanf("%d", &n2);

    n_max = n1;

    if (n1 < n2)

        n_max = n2;
        
    // n_max = (n1 > n2) ? n1 : n2; operatore ?: assegnera' n1 se condizione vera senno' n2

    printf("%d\n", n_max);
}