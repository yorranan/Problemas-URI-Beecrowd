#include <stdio.h>
#define PI 3.14159265358979323846
#include <math.h>

int main()
{
    int cases;

    double N, L, b, B, H;

    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%lf %lf %lf %lf %lf", &N, &L, &b, &B, &H);
        double Vn = (L / N);
        double raio_cone = pow(Vn * 3.0 * (B - b) / (PI * H) + pow(b, 3), 1.0 / 3.0);
        double h = Vn * 3.0 / (PI * (pow(raio_cone, 2) + raio_cone * b + pow(b, 2)));
        printf("%.2lf\n", h);
    }

    return 0;
}
