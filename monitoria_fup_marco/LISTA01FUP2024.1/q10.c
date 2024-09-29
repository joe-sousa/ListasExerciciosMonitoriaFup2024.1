#include<stdio.h>

/*Descreva um algoritmo que receba o tempo de uma receita em horas e minutos (Ex.: 1h e 40min) e
depois exiba um menu com as opções: 1 - segundos; 2 - minutos; 3 - horas. O programa deverá
converter o tempo dado para a unidade de medida escolhida (podendo resultar em números com casas
decimais como 1,75 horas, por exemplo).*/

int main(){
    float hours, minutes, result;
    printf("Digite o tempo da receita em hs e min: ");
    scanf("%f %f", &hours, &minutes);

    printf("Escolha uma opção: 1)segundos 2)minutos 3)horas ");

    int option;
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        result=(hours*60*60) + (minutes*60);
        printf("Horas em segundos %.2f\n", result);
        break;
    case 2:
        result=(hours*60) + (minutes);
        printf("Horas em minutos %.2f\n", result);
        break;
    case 3:
        result=hours + minutes/60;
        printf("Horas em hs %.2f\n", result);
        break;
    default:
        printf("Opção desconhecida\n");
        break;
    }
    return 0;
}