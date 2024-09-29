#include<stdio.h>
//A partir da idade de uma pessoa (em anos, meses e dias) e da data atual, descobrir a data de nascimento dela.
int main(){
    int dia=13, mes=7, ano=1986;
    int ano_atual = 2024;
    int mes_atual = 8;
    int dia_atual = 12;
    int idade;
    if(((mes_atual == mes) && (dia_atual >= dia)) || (mes_atual > mes)){
        idade = (ano_atual-ano);
    }else{
        idade = (ano_atual-ano)-1;
    }
    printf("%d ", idade);
    
    return 0;
}