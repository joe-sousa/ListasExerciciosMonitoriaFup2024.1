#include<stdio.h>

//Funcoes que tem um tipo - nao void - retorna algo do mesmo tipo da funcao.
int somaNumeros(int num1, int num2);

int main(){
    int num1=10, num2=20;
    int resultado = somaNumeros(num1, num2);
    printf("A soma de %d + %d = %d\n", num1, num2, resultado);
    fflush(stdout);
    return 0;
}

int somaNumeros(int num1, int num2){
    return num1 + num2;
}


