#include <stdio.h>

void main(){

    int dim;
    int i;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &dim);

    int n[dim];
    // inizializzazione vettore

    for (i = 0; i < dim; i++){

        printf("Inserisci n[%d]: ", i);
        scanf("%d", &n[i]);

    }
    // stampa vettore in ordine inverso
    
    printf("|");
    for (i = dim-1; i >= 0; i--){

        printf("%d|", n[i]);

    }
        
}