#include <stdio.h>

void main(){

    int n_numeri;
    int n;
    int n_max1, n_max2;
    int i;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n_numeri);

    n_max1 = 0;
    n_max2 = 0;

    for(i = 0; i < n_numeri; i++){

        printf("Inserisci n%d: ", i+1);
        scanf("%d", &n);

        if (n > n_max1){
            n_max2 = n_max1;
            n_max1 = n;
        } 
        else if (n > n_max2)
            n_max2 = n;
            
    }

    printf("1)%d\t2)%d\n", n_max1, n_max2);
}