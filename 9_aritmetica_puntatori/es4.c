#include <stdio.h>

#define MAX 4

void* cerca_indirizzo(void *vettore, size_t size, int indice);

int main()
{
    int v_interi[] = {1, 2, 3, 4};
    double v_double[] = {1.0, 2.0, 3.0, 4.0};
    char v_char[] = {'a', 'b', 'c', 'd'};

    puts("CONTROLLO INDIRIZZI");
    printf("interi %p\t%p\n", (v_interi+2), cerca_indirizzo(v_interi, sizeof(int), 2));
    printf("double %p\t%p\n", (v_double+2), cerca_indirizzo(v_double, sizeof(double), 2));
    printf("char %p\t%p\n", (v_char+4), cerca_indirizzo(v_char, sizeof(char), 4));
}

/*cerca_indirizzo: restituisce l'indirizzo di un elemento di un vettore di qualsiasi tipo*/
void* cerca_indirizzo(void *vettore, size_t size, int indice)
{
    if (indice >= MAX || indice < 0)
    {
        return NULL;
    }
    else
    {
        return (vettore + (size * indice));
    }
}