#include<stdio.h>

int main(){
    int hours;
    int min;
    int sec;
    printf("Digite o tempo no formato horas(hs) e min (min) ");
    scanf("%d %d", &hours, &min);

    sec = (hours * 60 * 60) + (min * 60);
    printf("\n%d", sec);
    return 0;
}