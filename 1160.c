#include <stdio.h>

int main()
{

    long long t, pa, pb;
    double g1, g2;
    int a, s, i;
    scanf("%lld", &t);
    i = 0;
    while (i < t)
    {

        scanf("%lld%lld%lf%lf", &pa, &pb, &g1, &g2);
        a = 0;
        s = 0;
        while (pa <= pb)
        {

            pa += pa*(g1/100);
            pb += pb*(g2/100);
            a++;
            if(a>100)
            {
                s = 1;
                break;
            }

        }
        if(s == 0)
        {
            printf("%d anos.\n", a);
        }
        else
            printf("Mais de 1 seculo.\n");
        i++;

    }
    return 0;

}