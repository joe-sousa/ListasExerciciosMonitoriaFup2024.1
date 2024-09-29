#include<stdio.h>

//Procedimento trata-se de uma funcao do tipo void que não retorna nada.

void imprimeMenores(int number);
int soma(int a, int b);
int multiplicacao(int a, int b);

int main(){
    imprimeMenores(10);
    int a = 4, b = 6;
    soma(a, b);
    multiplicacao(a, b);
    return 0;
}

void imprimeMenores(int number){
    for(int i=1; i<=number;i++){
        printf("%d ", i);
    }
}

int soma(int a, int b){
    int sum = a + b;
    printf("\nA soma eh: %d\n", sum);
    return sum;
}

int multiplicacao(int a, int b){
    int mult = a * b;
    printf("\nA multiplicacao eh: %d", mult);
    return mult;
}


