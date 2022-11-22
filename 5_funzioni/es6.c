#include <stdio.h>

#define MAX 20


void cripta_stringa(char *stringa, int k);
void decripta_stringa(char *stringa, int k);

void main()
{
    char stringa[MAX];

    printf("Inserisci stringa:\n");
    fgets(stringa, MAX, stdin);

    cripta_stringa(stringa, 3);
    printf("%s", stringa);

    decripta_stringa(stringa, 3);
    printf("%s", stringa);
}

/*cripta_stringa: effettua l'algoritmo  di cifratura di Cesare su una stringa*/
void cripta_stringa(char *stringa, int k)
{
    int minuscola;
    int i;

    for (i = 0; stringa[i] != '\0'; i++){
        
        minuscola = (stringa[i] >= 'a' && stringa[i] <= 'z');

        if (minuscola){

            if (stringa[i] + k > 'z'){

                stringa[i] = 96 + (stringa[i] + k - 'z');

            }else{

                stringa[i]+= k;
            }
        }
    }
}
/*cripta_stringa: effettua l'algoritmo di decifratura di Cesare su una stringa*/
void decripta_stringa(char *stringa, int k)
{
    int minuscola;
    int i;

    for (i = 0; stringa[i] != '\0'; i++){

        minuscola = (stringa[i] >= 'a' && stringa[i] <= 'z');

        if (minuscola){
            
            if (stringa[i] - k < 'a'){

                stringa[i] = 123 - ('a' - (stringa[i] - k));

            }else{

                stringa[i] -= k;
            }
        }
    }
}