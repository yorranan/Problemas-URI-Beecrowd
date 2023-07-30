#include <iostream>

int main()
{
    int x, y, y_aux, x_aux, voltas = 1;
    std::cin >> x >> y;
    y_aux = y;
    x_aux = x;
    do
    {
        voltas++;
        y_aux += y;
        x += x_aux;
    }
    while (x+y > y_aux);
    std::cout << voltas << "\n";
    return 0;
}