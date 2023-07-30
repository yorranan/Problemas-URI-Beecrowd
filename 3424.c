#include <stdio.h>
#define N 10000

int main()
{
    int n;
    int count = 0, acumulador = 0;
    char trecho[N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &trecho[i]);
        if (trecho[i] == 'a')
        {
            count++;
        }
        else 
        {
            if (count >= 2)
            {
                acumulador += count;
            }
            count = 0;
        }
    }
    if (count >= 2)
    {
        acumulador += count;
    }
    printf("%d\n", acumulador);
    
    return 0;
}