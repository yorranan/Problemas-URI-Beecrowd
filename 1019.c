#include <stdio.h>
 
int main() {
 
    int seconds, minutes, hours;
    scanf("%d", &seconds);
    minutes = seconds/60;
    seconds = seconds%60;
    hours = minutes/60;
    minutes = minutes%60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}