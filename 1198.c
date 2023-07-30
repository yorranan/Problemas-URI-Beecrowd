#include <stdio.h>
 
 
int main() {
 
    long long aux, x, y;
    while ((scanf("%lld", &x)) == 1)
    {
        
        scanf("%lld", &y);
        if (x > y)
        {
            aux = x-y;
        }
        else
        {
            aux = y-x;
        }
        
        printf("%lld\n", aux);
    }
 
    return 0;
    
}