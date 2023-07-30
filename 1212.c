#include <stdio.h>
#include <math.h>

int main(){
    unsigned long int 
    x,
    y,
    aux_b,
    aux,
    up1 = 0,
    u,
    v,
    carry = 0;
    while ((scanf("%lu%lu", &x, &y)) == 2 && (x != 0 || y != 0)){
        for (int i = 0; i < 9; i++){
            aux = pow(10, i+1);
            aux_b = aux/10;
            u = (x%aux)/aux_b;
            v = (y%aux)/aux_b;
            u += up1;
            up1 = 0;
            if (u + v >= 10)
            {
                up1 = 1;
                carry++;
            }
            if (x > 0 || y > 0){
                x = (x/aux)*aux;
                y = (y/aux)*aux; 
            } 
            else{
            }
        }
        if (carry > 0){
            if (carry != 1){
                printf("%lu carry operations.\n", carry);
            }else{
                printf("1 carry operation.\n");
            }
        }else{
            printf("No carry operation.\n");
        }
        carry = 0;
    }
}
