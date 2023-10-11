#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int vidas = 3;
    int ultimo_chamado = 0;
}

void cenario(char campo[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (campo[i][j] != ' ')
            {
                campo[i][j] = ' ';
                campo[]
            }
        }
    }
}

bool verifica_vidas(int vidas)
{
    if (vidas == 0)
    {
        return false;
    }
    return true;
}

int gerar_nova_posicao()
{
    srand(time(NULL));
    return rand() % 10;
}