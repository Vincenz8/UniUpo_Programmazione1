#include <stdio.h>

void main(){
    
    int n_numeri;
    int i;

    printf("Inserisci n numeri: ");
    scanf("%d", &n_numeri);

    int n[n_numeri];

    for(i = 0; i < n_numeri; i++){

        printf("Inserisci n[%d]: ", i);
        scanf("%d", &n[i]);

    }

    i = 1;
    while(i < n_numeri){

        if (n[i] == n[i-1])
            i++;
        else
            break;
            
    }

    if (i == n_numeri)
        printf("I numeri della sequenza sono tutti uguali");
    
    else
        printf("I numeri non sono tutti uguali");

}