#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float r, float *area, float *volume)
{

    printf("a area da superficie de sua esfera é: ");
    *area = 4 * pow(r, 2);
    printf("%.2f\n", *area);

    printf("\no volume da esfera é: ");
    *volume = (4 * pow(r, 3)) / 3;
    printf("%.2f\n", *volume);
}

int main()
{
    float raio, area, circulo;

    printf("escolha o valor do raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &circulo);

    return 0;
}