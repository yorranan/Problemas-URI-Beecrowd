#include <iostream>
#include <list>

int main()
{
    int volume_menor, volume_objeto;
    unsigned short int N, M, x, y, z;
    std::cin >> N >> M;
    std::cin >> x >> y >> z;
    volume_objeto = x*y*z;
    for (int i = 0; i < M; i++)
    {
        std::cin >> x >> y >> z;
    }
    return 0;
}