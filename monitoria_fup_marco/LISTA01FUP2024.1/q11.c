#include<stdio.h>
/*
Uma determinada empresa irá dar um aumento para seus funcionários de acordo com o cargo, que é
definido pelo código da tabela abaixo. Faça um programa que receba o salário de um funcionário e o
código correspondente ao seu cargo, e então calcule o novo salário dele.

CÓDIGO DO CARGO
1
2
3
4
PERCENTUAL DE AUMENTO
40%
25%
10%
0.5%

*/
int main(){
    float salary;
    int fuction;

    printf("Digite o salario ");
    scanf("%f", &salary);

    printf("Digite o código do cargo ");
    scanf("%d", &fuction);

    switch (fuction)
    {
    case 1:
        salary+=salary*0.4;
        break;
    case 2:
        salary+=salary*0.25;
        break;
    case 3:
        salary+=salary*0.005;
        break; 
    default:
        break;
    }

   printf("Salario com reajuste  %.2f\n", salary);
    return 0;
}
