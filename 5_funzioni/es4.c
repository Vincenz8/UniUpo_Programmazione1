#include <stdio.h>

void init_float_vet(float *vet, int len_vet);
void stampa_vet(float *vet, int len_vet);
float media_vet(float *vet, int len_vet);
float max_vet(float *vet, int len_vet);
float min_vet(float *vet, int len_vet);
float info_vet(float *vet,int len_vet, float media_vet, float max_vet, float min_vet);

void main(){

    int n;
    float media, max, min;

    printf("Inserire numero di elementi del vettore: ");
    scanf("%d", &n);
    printf("\n");

    float vet[n];
    init_float_vet(vet, n);

    media = media_vet(vet, n);
    max = max_vet(vet, n);
    min = min_vet(vet, n);

    info_vet(vet, n, media, max, min);

}

/*init_float_vet: inizializza un vettore contenente float*/
void init_float_vet(float *vet, int len_vet){

    int i;

    for (i = 0; i < len_vet; i++){

        printf("Inserisci n in posizione[%d]: ", i);
        scanf("%f", &vet[i]);

    }
}

/*media_vet: calcola la media di un vettore*/
float media_vet(float *vet, int len_vet){

    float media = 0;
    int i;

    for (i = 0; i < len_vet; i++){

        media += vet[i];
    }

    return media / len_vet;
}

/*max_vet: calcola il massimo di un vettore*/
float max_vet(float *vet, int len_vet){

    float max;
    int i;

    for (i = 0, max = vet[i]; i < len_vet; i++){

        if (vet[i] > max){
            max = vet[i];
        }
    }

    return max;
}

/*min_vet: calcola il minimo di un vettore*/
float min_vet(float *vet, int len_vet){

    float min;
    int i;

    for (i = 0, min= vet[i]; i < len_vet; i++){

        if (vet[i] < min){
            min = vet[i];
        }
    }

    return min;
}

/*stampa_vet: stampa un vettore contenente float*/
void stampa_vet(float *vet, int len_vet){

    int i;

    printf("[");

    for (i = 0; i < len_vet; i++){

        if (i == len_vet-1){
            printf("%.2f]", vet[i]);
        }else{
            printf("%.2f, ", vet[i]);
        }
    }
}

/*info_vet: visualizza il vettore ed il valore medio, massimo e minimo*/
float info_vet(float *vet, int len_vet, float media_vet, float max_vet, float min_vet){

    printf("INFORMAZIONI VETTORE\n");
    stampa_vet(vet, len_vet);
    printf("\n\n");
    printf("Valore medio: %.2f\nValore massimo: %.2f\nValore minimo: %.2f", media_vet, max_vet, min_vet);
}