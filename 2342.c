#include <stdio.h>
 
int main() {
 
    int N, P, Q;
    char C;
    scanf("%d%d%c%d", &N, &P, &C, &Q);
    if (C == '*') 
    {
        P = P*Q;
        if (P>N)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        } 
        
    }
    else 
    {
       P = P+Q;
       if (P>N)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        } 
    }
 
    return 0;
}