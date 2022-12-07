#include <stdio.h>

int float_porta_a_zero(float n);
int double_porta_a_zero(double n);
int long_double_porta_a_zero(long double n);


int main()
{
    float n = 50.0f;
    double n2 = 50.0;
    long double n3 = 50.0;
    
    printf("passi con float: %d\n", float_porta_a_zero(n));
    printf("passi con float: %d\n", double_porta_a_zero(n2));
    printf("passi con float: %d\n", long_double_porta_a_zero(n3));
}

/*float_porta_a_zero: restituisce il numero di passi necessari per portare un numero a zero dividendolo per 2*/
int float_porta_a_zero(float n)
{
    int i;

    for (i = 0; n != 0; i++)
    {
        n = n / 2;
    }
    
    return i;
}

/*double_porta_a_zero: restituisce il numero di passi necessari per portare un numero a zero dividendolo per 2*/
int double_porta_a_zero(double n)
{
    int i;

    for (i = 0; n != 0; i++)
    {
        n = n / 2;
    }
    
    return i;
}

/*long_double_porta_a_zero: restituisce il numero di passi necessari per portare un numero a zero dividendolo per 2*/
int long_double_porta_a_zero(long double n)
{
    int i;

    for (i = 0; n != 0; i++)
    {
        n = n / 2;
    }
    
    return i;
}
