#include <stdio.h>

int Fib[40], CallsFib[40];

void fib(int n){
    if(Fib[n] == -1){
        fib(n - 1);
        fib(n - 2);
        Fib[n] = Fib[n - 1] + Fib[n - 2];
        CallsFib[n] = CallsFib[n - 1] + CallsFib[n - 2] + 1;
    }
}

int main(){
    int N, X;
    Fib[0] = 0;
    Fib[1] = 1;
    CallsFib[0] = 1;
    CallsFib[1] = 1;
    for(int i = 2; i < 40; ++i){
        Fib[i] = -1;
        CallsFib[i] = -1;
    }
    scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        scanf("%d", &X);
        fib(X);
        printf("fib(%d) = %d calls = %d\n", X, CallsFib[X] - 1, Fib[X]);
    }

    return 0;
}