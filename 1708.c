#include <stdio.h>

int main()
{
    int x, y, y_aux, x_aux, voltas = 1;
    scanf("%d%d", &x, &y);
    y_aux = y;
    x_aux = x;
    do
    {
        voltas++;
        y_aux += y;
        x += x_aux;
    }
    while (x+y > y_aux);
    printf("%d\n", voltas);
    return 0;
}