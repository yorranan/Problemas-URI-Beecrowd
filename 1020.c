#include <stdio.h>

int main(){
    int dias, meses, ano, r;
    scanf("%d", &dias);
    ano=dias/365;
    r=dias%365;
    meses=r/30;
    dias=r%30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    return 0;
}