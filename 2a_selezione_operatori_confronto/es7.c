#include <stdio.h>
#include <math.h>

/*
La compilazione di questo programma necessita della flag -lm

gcc es7.c -lm

La flag e' necessaria per linkare il file dove sono definite le funzioni della libreria math.h ovvero libm.a

In caso non venga compilato correttamente ci si ritrovera' l'errore seguente

/usr/bin/ld: /tmp/ccuhCus3.o: in function `main':
es7.c:(.text+0x8e): undefined reference to `pow'
collect2: error: ld returned 1 exit status

*/

int main()
{
    const float PI = 3.14;
    int raggio;
    float area;

    printf("Inserisci il raggio della circonferenza: ");
    scanf("%d", &raggio);

    if (raggio > 0){

        area = PI * pow(raggio, 2);
        printf("Raggio: %d\tArea: %6.2f\n", raggio, area);

    } else
    
        printf("IL RAGGIO DEVE ESSERE > O\n");
}