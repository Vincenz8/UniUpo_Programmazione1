#include <stdio.h>

void main()
{
    int n;
    int i, j;

    printf("Inserisci n:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
                printf("0 ");
            else if (j > i)
                printf("X ");
            else
                printf("Y ");
        }

        printf("\n");
    }
}