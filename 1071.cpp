#include <iostream>

int main()
{
    int x, y, soma = 0;

    std::cin >> x >> y;
    if (x > y)
    {
        for (int i = y+1; i < x; i++)
        {
            if (i%2 != 0)
            {
                soma += i;
            }
        }
    }
    else
    {
        for (int i = x+1; i < y; i++)
        {
            if (i%2 != 0)
            {
                soma += i;
            }
        }
    }
    std::cout << soma << std::endl;
}