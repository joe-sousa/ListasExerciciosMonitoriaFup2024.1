#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float fase1(float nota1, float nota2)
{
    float maior = 0;
    if (nota1 > nota2)
    {
        maior = nota1;
    }
    else
    {
        maior = nota2;
    }
    return maior;
}

float fase2(float nota[])
{
    float notaMaior1 = 0, notaMaior2 = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        if (nota[i] > notaMaior1)
        {
            notaMaior2 = notaMaior1;
            notaMaior1 = nota[i];
        }
        else if (nota[i] > notaMaior2 && nota[i] < notaMaior1)
        {
            notaMaior2 = nota[i];
        }
    }
    printf("Fase 2\n");
    printf("A maior nota é: %.2f\n", notaMaior1);
    printf("A segunda maior nota é: %.2f\n", notaMaior2);

    return notaMaior1 + notaMaior2;
}

int main()
{
    srand(time(NULL));

    int i = 0;
    float nota1 = rand() % 100;
    float nota2 = rand() % 100;
    float notas[] = {10, 3, 5, 6, 2};

    printf("Fase 1 - %.0f %.0f\n", nota1, nota2);
    float maiorFase1 = fase1(nota1, nota2);
    printf("%.0f\n", maiorFase1);
    
    float maiorFase2 = fase2(notas);
    printf("%.0f\n", maiorFase2);

    printf("Total %.2f\n", maiorFase1 + maiorFase2);
    return 0;
}