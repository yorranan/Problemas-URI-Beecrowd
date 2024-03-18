#include <stdio.h>
#include <string.h>

int main() {
 
    char palavra[20];
    scanf("%s", palavra);
    if (strlen(palavra) >= 10)
    {
        printf("palavrao\n");
        return 0;
    }
    printf("palavrinha\n");
    return 0;
}