#include <stdio.h>
#include <math.h>
#define S 2.23606797749979

double fib(int *n)
{
    return (pow(((1+S)/2), *n)-pow(((1-S)/2), *n))/(S);
}

int main()
{
    int n;
    scanf("%i", &n); 
    printf("%.1lf\n", fib(&n));  
}