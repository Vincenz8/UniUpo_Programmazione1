#include <stdio.h>

#define R 3
#define C 2

void visualizza_matrice(int** mat_composta);
void stat_matrice(int** mat_composta, int* min, int*max);

int main()
{
    int v1[C] = {1, 2};
    int v2[C] = {3, 8};
    int v3[C] = {5, -1};

    int* mat[R] = {v1, v2, v3};

    int min, max;

    visualizza_matrice(mat);
    stat_matrice(mat, &min, &max);

    printf("min: %d\tmax: %d", min, max);

}

/*visualizza_matrice: visualizza una matrice*/
void visualizza_matrice(int** mat_composta)
{
    int i, j;

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d\t", *(*(mat_composta + i) + j));
        }

        printf("\n");
    }
}

/*stat_matrice: restituisce minimo e massimo della matrice composta*/
void stat_matrice(int** mat_composta, int* min, int* max)
{
    *min = *max = *(*mat_composta);

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            int nuovo_minore = (*(*(mat_composta + i) + j) < *min);
            int nuovo_maggiore = (*(*(mat_composta + i) + j) > *max);

            *min = (nuovo_minore) ? *(*(mat_composta + i) + j) : *min;
            *max = (nuovo_maggiore) ? *(*(mat_composta + i) + j) : *max;
        }
    }
}