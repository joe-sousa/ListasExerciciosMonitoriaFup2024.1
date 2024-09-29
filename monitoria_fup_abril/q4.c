#include<stdio.h>

//Faça um programa que some números reais fornecidos pelo usuário até que ele digite o número 0 e exiba o resultado
int main(){
    float valor, parada=0.0;
    
    
    float count=0.0;
     do{
        printf("Digite o valor ");
        scanf("%f", &valor);
        count+=valor;
     }while(valor != 0);
        

     printf("%.2f\n", count);
    
    return 0;
}