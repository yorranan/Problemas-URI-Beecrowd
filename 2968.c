#include <stdio.h>
#define TAM 9

int main()
{
    int V, N, aux;
    char espace = ' ';
    scanf("%d%d", &V, &N);
    for (int i = 1; i <= TAM; ++i){
        if ((i*V*N)%10){
            aux = ((i*V*N)/10) + 1;
        }
        else {
            aux = (i*V*N)/10;
        }
        if (i == 9){
            espace = '\n';
        }
        printf("%d%c", aux, espace);
    }
}