#include <iostream>

int main()
{
    unsigned int 
    casos_de_teste = 0;
    unsigned short int
    r = 0,
    c = 0,
    tamanho = 0;
    bool 
    direcao,
    valido = true,
    campo[11][11] = {false};
    std::cin >> casos_de_teste;
    for (int index = 0; index < casos_de_teste; index++)
    {
        std::cin >> direcao;
        std::cin >> tamanho >> r >> c;

        if (direcao == 0)
        {
            if(tamanho+c >= 11)
            {
                valido = false;
            }
            else {
                for (int i = c; i <= tamanho+c; i++)
                {
                    if(campo[r][i] == false)
                    {
                        campo[r][i] = true;
                    }
                    else
                    {
                        valido = false;
                        i = tamanho+c+1;
                    }
                }
            }
        }
        else
        {
            if (tamanho+r >= 11)
            {
                valido = false;
            }
            else
            {
                for (int i = r; i <= tamanho+r; i++)
                {
                    if(campo[i][c] == false)
                    {
                        campo[i][c] = true;
                    }
                    else
                    {
                        valido = false;
                        i = tamanho+r+1;
                    }
                }
            }
        }
    }
    if (valido == true)
    {
        std::cout << "Y" << std::endl;
    }
    else
    {
        std::cout << "N" << std::endl;
    }
    return 0;
}