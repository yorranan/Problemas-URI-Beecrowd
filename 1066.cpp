#include <iostream>
#define N 5

int main()
{
    int positivos = 0, negativos = 0, pares = 0, x[N] = {0};
    for (int i = 0; i < N; i++)
    {
        std::cin >> x[i];
        if (x[i]%2 == 0)
            pares++;
        if (x[i] > 0)
            positivos++;
        else
            if (x[i] < 0)
            {
                negativos++;
            }
    }
    std::cout << pares << " valor(es) par(es)\n";
    std::cout << N-pares << " valor(es) impar(es)\n";
    std::cout << positivos << " valor(es) positivo(s)\n";
    std::cout << negativos << " valor(es) negativo(s)\n";
}