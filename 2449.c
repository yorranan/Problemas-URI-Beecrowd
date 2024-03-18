#include <stdio.h>

int abs(int diferenca)
{
    if (diferenca < 0)
    {
        return diferenca * (-1);
    }
    return diferenca;
}

int main() {
    int n, tamanho, vetor[1001], resposta = 0;
    scanf("%d %d", &n, &tamanho);
    for (int i = 0; i  <  n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i  <  n; i++) 
    {
        int diferenca = tamanho - vetor[i];
        resposta += abs(diferenca);
        vetor[i + 1] += diferenca;
    }
    printf("%d\n", resposta);
    return 0;
}
