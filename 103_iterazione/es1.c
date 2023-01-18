#include <stdio.h>

int main()
{

    int n_numeri;
    int n, n_max;
    int i;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n_numeri);
    n_max = 0;

    for(i = 0; i < n_numeri; i++)
    {
        printf("Inserisci n%d: ", i + 1);
        scanf("%d", &n);

        n_max = (n > n_max) ? n : n_max;
    }
    
    printf("Il maggiore e' %d\n", n_max);
}