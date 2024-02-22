#include <stdio.h>
#define INF 100000

typedef struct
{
    int index;
    int val;
} item;

int main()
{
    int nc, n, k, tam = INF, j, i;
    item items[INF], aux[INF];
    scanf("%i", &nc);
    for (i = 0; i < nc; i++) {
        scanf("%i %i", &n, &k);
        for (j = 1; j <= n; j++) {
            items[j-1].index = j;
            items[j-1].val = j;
        }
        tam = j-1;
        j = 0;
        int ja = 0;
        while (tam > 1) {
            if (j == tam) {
                ja = 0;
                j = 0;
                for (int k = 0; k < tam; k++) {
                    items[k] = aux[k];
                }
            }
            if (items[j].index%k == 0) {
                aux[ja].index = j+1+tam;
                aux[ja].val = items[j].val;
                items[tam] = items[j];
                for (int id = j; id < tam; id++) {
                    items[id] = items[id+1];
                } 
                ja++;
                tam--;
            }
            j++;
        }
        printf("res: %d\n", items[0].val);
    }
    return 0;
}