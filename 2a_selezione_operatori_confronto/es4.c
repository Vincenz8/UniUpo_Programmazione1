#include <stdio.h>
// #include <math.h> per usare il metodo fabs()

void main(){

    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    // casting della funzione fabs(restituisce un double)
    // n = (int) fabs(n);   

    printf("Valore assoluto: %d\n", n);
    
}