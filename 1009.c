#include <stdio.h>
 
int main() {
 
    char nome;

    double sfix, cont, aux;
    scanf("%s", &nome);
    scanf("%lf %lf", &cont, &aux);
    printf("TOTAL = R$ %.2lf\n", (cont + aux*.15));
 
    return 0;
}