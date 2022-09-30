#include <stdio.h>

void main(){

    int x, y, h;
    int area_trapezio;

    x = 3;
    y = 7;
    h = 8;
    area_trapezio = ((x + y) * h) / 2;

    printf("Base1 = (%d)\n", x);
    printf("Base2 = (%d)\n", y);
    printf("Altezza = (%d)\n", h);
    printf("Area = (%d)\n", area_trapezio);
}