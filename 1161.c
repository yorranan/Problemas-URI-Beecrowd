#include <stdio.h>

unsigned long long fat(unsigned long long n);

int main()
{
    unsigned long long M, N, soma = 0;
    while (scanf("%llu %llu", &M, &N) == 2)
    {
        printf("%llu\n", fat(M) + fat(N));
    }
    
    return 0;
}

unsigned long long fat(unsigned long long n) 
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else 
    {
        return n * fat(n - 1);
    }
}
