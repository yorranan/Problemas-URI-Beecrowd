#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> tab;

void calc(int a)
{
    if (tab[a + 1] == 0)
    {
        tab[a] += 1;
    } 
    else 
    {
        tab[a + 1] -= 1;
        tab[a] += 1;
    }
}

int main()
{
    for (int i = 0; i < 500000; i++)
    {
        tab.push_back(0);
    }

    int aux, N;
    vector<int> entrada;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> aux;
        entrada.push_back(aux);
    }

    int valorMax = *max_element(entrada.begin(), entrada.end());

    for (int j: entrada)
    {
        calc(j);
    }
    int soma = 0;
    for (int j = 0; j < 500000; j++)
    {
        soma += tab[j];
    }
    printf("%d\n", soma);
}   