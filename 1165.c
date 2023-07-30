#include <stdio.h>

int main() {
    int i, e, n, x, aux;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        e = 0;
        aux = 0;
        do
        {
            e++;
            if ((x%e)==0)
            {
               aux += 1; 
            }
        } while (e<=x);
        if (aux>2)
        {
            printf("%d nao eh primo\n", x);
        }
        else
        {
            printf("%d eh primo\n", x);
        }
        
    }
    
    
    
    return 0;
}