#include <stdio.h>

void main(){

    int n1, n2, n3;
    int n_max;

    printf("Inserisci n1: ");
    scanf("%d", &n1);
    printf("Inserisci n2: ");
    scanf("%d", &n2);
    printf("Inserisci n3: ");
    scanf("%d", &n3);

    if ((n1 >= n2) && (n2 > n3))

        n_max = n1;

    else if ((n1 < n2) && (n2 > n3))

        n_max = n2;
    
    else

        n_max = n3;

    /*
    Alternativa con operatore ternario ?:

    n_max = (n1 > n2) ? n1 : n2;
    n_max = (n_max > n3) ? n_max : n3;
    
    */
    printf("Il massimo e' %d\n", n_max);

}