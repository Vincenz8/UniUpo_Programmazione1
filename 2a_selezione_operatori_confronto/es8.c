#include <stdio.h>

void main(){

    float n1, n2;
    float risultato;
    char op;

    printf("Inserisci n1: ");
    scanf("%f", &n1);
    printf("Inserisci n1: ");
    scanf("%f", &n2);
    printf("Inserisci operatore (+, -, *, /): ");
    scanf("%s", &op);

    switch (op){
        case '+':
            risultato = n1 + n2;
            break;

        case '-':
            risultato = n1 - n2;
            break;

        case '*':
            risultato = n1 * n2;
            break;

        case '/':
            risultato = n1 / n2;
            break;
        
        default:
            printf("OPERATORE SCONOSCIUTO");
            break;
    }

    printf("\n%.2f %c %.2f = %.2f\n", n1, op, n2, risultato);
}