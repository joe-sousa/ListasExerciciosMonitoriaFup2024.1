#include<stdio.h>

void check_aliquota(double salario){
    double desconto;
    if(salario <= 2112.00){
        printf("Isento\n");
    }else if((salario >= 2112.01) && (salario <= 2826.65)){
        desconto = salario * 0.075;
        printf("Aliquota de 7,5%% - Desconto de %.2f\n", desconto);
    }else if((salario >= 2826.66) && (salario <= 3751.05)){
        desconto = salario * 0.15;
        printf("Aliquota de 15%% - Desconto de %.2f\n", desconto);
    }else if((salario >= 3751.06) && (salario <= 4664.68)){
        desconto = salario * 0.225;
        printf("Aliquota de 22.5%% - Desconto de %.2f\n", desconto);
    }else{
        printf("Salario fora das aliquotas da tabela\n");
    }
}

int main(){
    double valor;
    char check;

    do{
        printf("Digite o salario do trabalhador ");
        scanf("%lf", &valor);
        if(valor > 0){
            check_aliquota(valor);
        }else{
            printf("Digite um valor positivo\n");
        }
        
        printf("Deseja inserir outro salario: s ou n ");
        scanf(" %c", &check);
    }while(check == 's');

    return 0;
}