#include <stdio.h>

int main()
{
    unsigned long long int x, sheeps = 0, star = 0, i;
    scanf("%llu", &x);
    unsigned long long int v[x];
    unsigned long long int stolen[x];
    for (i = 0; i < x; i++){
        scanf("%llu", &v[i]);
        stolen[i] = 0;
    }
    i = 0;
    while (i < x && i >= 0 && v[i] > 0){
        if (stolen[i] == 0)
        {
            stolen[i] = 1;
            star++;
        }
        if (v[i] % 2 != 0)
        {
            v[i]--;
            i++;
        }
        else
        {
            v[i]--;
            i--;
        }
    }
    for (i = 0; i < x; i++)
    {
        sheeps += v[i];
    }
    printf("%llu %llu", star, sheeps);
    return 0;
}