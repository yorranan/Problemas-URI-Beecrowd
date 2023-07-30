#include <stdio.h>
#include <math.h>

int main() 
{

    int a, b, c, aux;
    a = 1;
    do
    {
        
        scanf("%d", &a);
        if (a==0)
        {
          break;  
        }
        scanf("%d%d", &b, &c);
        aux = (a*b*100)/c;
        aux = sqrt(aux);
        printf("%d", aux);

    } while (1);
    
    

    return 0;

}