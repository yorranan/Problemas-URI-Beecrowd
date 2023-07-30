#include <iostream>

unsigned long long fat(unsigned long long n);

int main()
{
    unsigned long long M, N, soma = 0;
    while (std::cin >> M >> N)
    {
        std::cout << fat(M) + fat(N) << std::endl; 
    }
    
}

unsigned long long fat(unsigned long long n) 
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else 
    {
        return n*fat(n-1);
    }
}