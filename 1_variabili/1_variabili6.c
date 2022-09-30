/*
Scrivere un programma che permetta di inserire 4 numeri float e ne stampi:
la somma,la media, il prodotto.
*/

#include <stdio.h>

void main(){

    float n1, n2, n3, n4;
    float somma, media, prodotto;
    int size;

    printf("Inserisci n1: ");
    scanf("%f", &n1);
    printf("Inserisci n2: ");
    scanf("%f", &n2);
    printf("Inserisci n3: ");
    scanf("%f", &n3);
    printf("Inserisci n4: ");
    scanf("%f", &n4);

    size = sizeof(int);
    printf("Size: %d\n", size);

}