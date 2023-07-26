#include <iostream>
#include <vector>
#include <climits>

#define MAX 1000

unsigned short int weight_matrix[MAX][MAX] = {0};

void removeRoute(unsigned short int U, unsigned short int V)
{
    weight_matrix[U][V] = 0;
} 

void insertRoute(unsigned short int U, unsigned short int V, unsigned short int W)
{
    weight_matrix[U][V] = W;
}

short int searchRoute()
{
    short int result = -1;
    // pesquisa
    return result;
}

int main()
{
    unsigned short int N = 0, M = 0;
    scanf("%d%d", &N, &M);

    unsigned short int U = 0, V = 0, W = 0;
    for (short int i = 0; i < M; i++){
        scanf("%d%d%d", &U, &V, &W);
    }

    unsigned short int Q = 0;
    scanf("%d", &Q);
    char letter;
    for (int i = 0; i < Q; i++)
    {
        scanf("%c", letter);
        switch (letter)
        {
        case 'R':
            scanf("%d%d", &U, &V);
            removeRoute(U, V);
            break;
        case 'I':
            scanf("%d%d%d", &U, &V, &W);
            insertRoute(U, V, W);
            break;
        case 'P':
            
            break;
        }
    }
    return 0;
}