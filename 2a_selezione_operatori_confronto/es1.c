#include <stdio.h>

void main(){

    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)

        printf("Il numero e' pari\n");

    else

        printf("Il numero non e' pari\n");

}