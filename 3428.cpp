#include <iostream>
#define MAX 500000

int main() 
{
    unsigned int 
    casos_de_teste, 
    maior = 0, 
    aux, maior_pos = 0, 
    maior_aux = 0,
    baloes_estourados = 0,
    baloes[MAX],
    flecha = 0;
    bool flecha_caida = false;
    std::cin >> casos_de_teste;
    for (unsigned int i = 0; i < casos_de_teste; i++)
    {
        std::cin >> aux;
        baloes[i] = aux;
        if (aux > maior) {
            maior = aux;
        };
    }
    unsigned int i = 0;
    while (i < casos_de_teste)
    {
        if ((maior_aux < baloes[i]) && (baloes[i] != maior))
        {
            maior_aux = baloes[i];
        }
        if ((baloes[i] == maior) && (flecha_caida == false))
        {
            baloes[i] = 0;
            baloes_estourados++;
            maior--;
            if (maior == 0)
            {
                flecha_caida = true;
            }
        }
        i++;
        if ((i == casos_de_teste) && (baloes_estourados <= casos_de_teste))
        {
            flecha++;
            i = 0;
            flecha_caida = false;
            if (maior_aux > 0)
            {
                maior = maior_aux;
            }
            maior_aux = 0;
        }
    }
    std::cout << flecha << std::endl;
}