#include <stdio.h>

int main()
{
    int Do, Ho, Mo, So, D, H, M, S, W, X, Y, Z;

    scanf("Dia %d", &Do);
    scanf("%d : %d : %d\n", &Ho, &Mo, &So);
    scanf("Dia %d", &D);
    scanf("%d : %d : %d", &H, &M, &S);

    W = D - Do;
    X = H - Ho;
    Y = M - Mo;
    Z = S - So;

    while (W < 0 || X < 0 || Y < 0 || Z < 0)
    {
        if (W < 0)
        {
            W += 365;
        }
        if (X < 0)
        {
            X += 24;
            W--;
        }
        if (Y < 0)
        {
            Y += 60;
            X--;
        }
        if (Z < 0)
        {
            Z += 60;
            Y--;
        }
    }

    printf("%d dia(s)\n", W);
    printf("%d hora(s)\n", X);
    printf("%d minuto(s)\n", Y);
    printf("%d segundo(s)\n", Z);
    return 0;
}