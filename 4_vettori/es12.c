#include <stdio.h>
#include <string.h>

#define ALFABETO "aeioubcdfghjklmnpqrstvwxyz"
#define N_ALFABETO (int) strlen(ALFABETO)
#define MAX_TEXT 100

void main(){

    char testo[MAX_TEXT];
    int occorrenze[N_ALFABETO];
    int n_vocali, n_consonanti;
    int i, j;

    printf("Inserisci testo: \n");
    fgets(testo, MAX_TEXT, stdin);

    n_vocali = n_consonanti = 0;

    // inizializzazione occorrenze
    for (i = 0;i < N_ALFABETO; i++){
        occorrenze[i] = 0;
    }

    for (i = 0; i < (int)strlen(testo); i++){

        for (j = 0; j < N_ALFABETO; j++){

            if (testo[i] == ALFABETO[j]){

                occorrenze[j]++;

                if (j < 5)
                    n_vocali++;
                else
                    n_consonanti++;

                break;

            } 
        }

    }
    
    // stampa occorrenze
    printf("N vocali: %d\tN consonanti: %d\n", n_vocali, n_consonanti);

    for (i = 0; i < N_ALFABETO; i++){
        printf("%c: %d\n", ALFABETO[i], occorrenze[i]);
    }

}