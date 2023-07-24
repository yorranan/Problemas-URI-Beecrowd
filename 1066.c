#include <stdio.h>
#define N 5

int main()
{
    int 
    x[N] = {0},
    negativos = 0,
    positivos = 0,
    impares = 0,
    pares = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
        if (x[i]%2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        if (x[i] > 0)
        {
            positivos++;
        }
        else
        {
            if (x[i] < 0)
            {
                negativos++;
            }
        }
    }
    scanf("%d valor(es) par(es)\n", pares);
    scanf("%d valor(es) impar(es)\n", impares);
    scanf("%d valor(es) positivo(s)\n", positivos);
    scanf("%d valor(es) negativo(s)\n", negativos);
}