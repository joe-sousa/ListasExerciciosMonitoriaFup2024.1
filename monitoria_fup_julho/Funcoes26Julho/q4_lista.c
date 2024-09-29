#include <stdio.h>

#define BLACK 0
#define BROWN 1
#define RED 2
#define ORANGE 3
#define YELLOW 4
#define GREEN 5
#define BLUE 6
#define VIOLET 7
#define GRAY 8
#define WHITE 9
#define GOLDEN 10
#define SILVER 11

float number(float colour1, float colour2, float colour3)
{
    float temp = 0, resistor;
    temp = temp * 10 + colour1;
    temp = temp * 10 + colour2;
    temp = temp * 10 + colour3;

    return temp;
}

int main()
{
    int i = 0, opcao;
    float faixa, faixa1, faixa2, faixa3, faixa4;
    do
    {
        printf("Faixa %d:\n", i);
        {
            printf("ESCOLHA UMA COR:\n 1)PRETO 2)MARROM 3)VERMELHO 4)LARANJA 5)AMARELO 6)VERDE 7)AZUL 8)VIOLETA 9)CINZA\n 10)BRANCO 11)DOURADO 12)PRATEADO ");
            scanf("%d", &opcao);
            switch (opcao)
            {
            case 1:
                faixa = BLACK;
                break;
            case 2:
                faixa = BROWN;
                break;
            case 3:
                faixa = RED;
                break;
            case 4:
                faixa = ORANGE;
                break;
            case 5:
                faixa = YELLOW;
                break;
            case 6:
                faixa = GREEN;
                break;
            case 7:
                faixa = BLUE;
                break;
            case 8:
                faixa = VIOLET;
                break;
            case 9:
                faixa = GRAY;
                break;
            case 10:
                faixa = WHITE;
                break;
            case 11:
                faixa = GOLDEN;
                break;
            case 12:
                faixa = SILVER;
                break;
            default:
                break;
            }
        }
        if (i == 0)
        {
            faixa1 = faixa;
        }
        else if (i == 1)
        {
            faixa2 = faixa;
        }
        else if (i == 2)
        {
            faixa3 = faixa;
        }
        else if (i == 3)
        {
            faixa4 = faixa;
        }
        i++;
    } while (i < 4);

    float numero = number(faixa1, faixa2, faixa3);
    
    if (faixa4 == 0)
    {
        numero*=1;
    }else if(faixa4 == 1){
        numero*=10;
    }else if(faixa4 == 2){
        numero*=100;
    }else if(faixa4 == 3){
        numero*=1;
    }else if(faixa4 == 4){
        numero*=10;
    }else if(faixa4 == 5){
        numero*=100;
    }else if(faixa4 == 6){
        numero*=1;
    }else if(faixa4 == 7){
        numero*=10;
    }else if(faixa4 == 8){
        numero*=1;
    }else if(faixa4 == 9){
        numero*=1;
    }else if(faixa4 == 10){
        numero*=0.1;
    }else if(faixa4 == 11){
        numero*=0.01;
    }

    printf("%.2f\n", numero);
    return 0;
}
