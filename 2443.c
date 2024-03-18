#include <stdio.h>

int mdc(int n1, int n2) 
{ 
    if( n2 == 0 ) return n1;
	return mdc(n2, n1 % n2);
}

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    int dividendo = (a*d)+(b*c);
    int divisor = (b*d);
    int aux = mdc(dividendo, divisor);
    printf("%d %d\n", dividendo/aux, divisor/aux);
    return 0;
}