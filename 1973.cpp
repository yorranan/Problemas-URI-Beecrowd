#include <stdio.h>

int main()
{
    long long int n, i;
    scanf("%lld", &n);
    int estrelas[n] , ovelhas[n] ;
    long long int estrelas_count = 0 , ovelhas_count = 0;

    for(i = 0 ; i  < n ; i++){
        scanf("%d", &ovelhas[i]);
        estrelas[i] = 0;
    }
    i = 0;
    while(1){
        if(i == 0 && ovelhas[i]%2 == 0){
            estrelas[i] = 1;
            if(ovelhas[i] > 0)
                ovelhas[i]--;
            break;
        }
        else if(i == n-1 && ovelhas[i]%2 == 1){
            estrelas[i] = 1;
            if(ovelhas[i] > 0)
                ovelhas[i]--;
            break;
        }
        if(ovelhas[i]%2 == 1){
            estrelas[i] = 1;
            ovelhas[i]--;
            i++;
        }
        if(ovelhas[i]%2 == 0){
            estrelas[i] = 1;
            if(ovelhas[i] > 0)
                ovelhas[i]--;
            i--;
        }
    }
    for(i = 0 ; i < n ; i++){
        ovelhas_count += ovelhas[i];
        estrelas_count += estrelas[i];
    }
    printf("%lld %lld\n", estrelas_count, ovelhas_count);

    return 0;
}
