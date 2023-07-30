#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c, d, r1, r2;
    scanf("%lf%lf%lf", &a, &b, &c);

    if ((a!=0)&&(b!=0)&&(c!=0)) {
        d = pow(b, 2)-4*a*c;
            if (d>(-1))
            {
                if (d==0) {
                r1 = (-b+sqrt(d))/(2*a);
                printf("R1 = %.5lf\n", r1);
            } else {
                r1 = (-b+sqrt(d))/(2*a);
                r2 = (-b-sqrt(d))/(2*a);
                printf("R1 = %.5lf\n", r1);
                cprintf("R1 = %.5lf\n", r2);
            }
            } else {
                printf("Impossivel calcular\n");
            }
            
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
} 
