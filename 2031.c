#include <stdio.h>

int main()
{
    int i, n;
    char j1[10], j2[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %s", &j1, &j2);
        if (j1[1] == 't') {
            if (j2[1] == 'e' || j2[1] == 'a') printf("Jogador 1 venceu\n");
            else printf("Aniquilacao mutua\n");
        }
        else if (j1[1] == 'e') {
            if (j2[1] == 't') printf("Jogador 2 venceu\n");
            else if (j2[1] == 'a') printf("Jogador 1 venceu\n");
            else printf("Sem ganhador\n");
        }
        else {
            if (j2[1] == 't' || j2[1] == 'e') printf("Jogador 2 venceu\n");
            else printf("Ambos venceram\n");
        }
    }
    return 0;
}