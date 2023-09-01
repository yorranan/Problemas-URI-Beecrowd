#include <stdio.h>

typedef struct 
{
    long long int value;
    short int stolen;
}node;

long long int main()
{
    long long int x, sheeps = 0, stolen = 0, star = 0;
    scanf("%lld", &x);
    node v[100000];
    for (long long int j = 0; j < x; j++)
    {
        scanf("%lld", &v[j].value);
        sheeps += v[j].value;
        v[j].stolen = 0;
    }
    long long int i = 0;
    while (i < x && i > -1)
    {
        if (v[i].value > 0)
        {
            stolen++;
            if (v[i].stolen == 0)
            {
                v[i].stolen = 1;
                star++;
            }
            if (v[i].value % 2 != 0)
            {
                v[i].value--;
                i++;
            }
            else
            {
                v[i].value--;
                i--;
            }
        }
        else
        {
            i--;
        }
    }
    printf("%lld %lld\n", star, sheeps - stolen);
}