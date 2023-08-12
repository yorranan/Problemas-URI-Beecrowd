#include <stdio.h>
 
int main() {
 
    int fnc;
    float valorHora, salario, horas;
    scanf("%d", &fnc);
    scanf("%f", &horas);
    scanf("%f", &valorHora);
    
    salario = horas*valorHora;
     
    printf("NUMBER = %d\n", fnc);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}
