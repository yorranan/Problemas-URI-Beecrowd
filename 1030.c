#include <stdio.h>

int T(int n, int k) {
    if (n == 1) return 0;
    else return (T(n-1,k)+k)%n;
}

int main() {
    int nc, n, k;
    scanf("%i",&nc);
    for (int i = 0; i < nc; i++) {
        scanf("%i %i", &n, &k);
        printf("Case %i: %i", i+1, T(n, k)+1);
    }
    return 0;
}