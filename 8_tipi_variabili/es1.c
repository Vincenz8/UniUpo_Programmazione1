#include <stdio.h>

int fatt_int(int n);
short fatt_short(int n);
long fatt_long(int n);

int main()
{
    int n = 15;

    printf("int %d\n", fatt_int(n));
    printf("short %d\n", fatt_short(n));
    printf("long %ld\n", fatt_long(n));
}


/*fatt_int: calcola il fattoriale, restituisce -1 se non calcolabile*/
int fatt_int(int n)
{
    int fattoriale = 1;
    int i;

    if (n < 0)
    {
        return -1;
    }

    for (i = 2; i <= n; i++)
    {
        fattoriale *= i;
    }

    return fattoriale;
}

/*fatt_short: calcola il fattoriale, restituisce -1 se non calcolabile*/
short fatt_short(int n)
{
    short fattoriale = 1;
    int i;

    if (n < 0)
    {
        return -1;
    }

    for (i = 2; i <= n; i++)
    {
        fattoriale *= i;
    }

    return fattoriale;
}

/*fatt_long: calcola il fattoriale, restituisce -1 se non calcolabile*/
long fatt_long(int n)
{
    long fattoriale = 1;
    int i;

    if (n < 0)
    {
        return -1;
    }

    for (i = 2; i <= n; i++)
    {
        fattoriale *= i;
    }

    return fattoriale;
}