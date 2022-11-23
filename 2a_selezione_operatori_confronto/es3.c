#include <stdio.h>

int main()
{
    int n1, n2;

    n1 = 3;
    n2 = 6;

    if (n1 % n2 == 0)

        printf("%d e' multiplo di %d\n", n1, n2);
    
    else
        
        printf("%d non e' un multiplo di %d\n", n1, n2);
}