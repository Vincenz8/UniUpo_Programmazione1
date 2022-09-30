/*
Scrivere un programma che permetta di inserire 4 numeri float e ne stampi:
la somma,la media, il prodotto.
*/

#include <stdio.h>

void main(){

    float n1, n2, n3, n4;
    float somma, media, prodotto;

    printf("Inserisci n1: ");
    scanf("%f", &n1);
    printf("Inserisci n2: ");
    scanf("%f", &n2);
    printf("Inserisci n3: ");
    scanf("%f", &n3);
    printf("Inserisci n4: ");
    scanf("%f", &n4);

    somma = n1 + n2 + n3 + n4;
    media = (n1 + n2 + n3 + n4) / 4;
    prodotto = n1 * n2 * n3 * n4;

    printf("Somma: %f\nMedia: %f\nProdotto: %f\n", somma, media, prodotto);

}