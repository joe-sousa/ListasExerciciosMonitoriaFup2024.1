#include<stdio.h>

void printNumbers(int x){
    for(int j=0; j<x; j++){
        if(j%2 == 0){
            printf("%d\n", j);
        }
        
    }
}

float printSoma(int x, int y){
    float res = x + y;
    return res;
}

int main(){
    // printSum(2, 3);
    int x, y;
    printf("Digite um numero:\n");
    scanf("%d", &x);

    printNumbers(x);
    
    // printf("Digite o segundo numero:\n");
    // scanf("%d", &y);
    
    // float soma = printSoma(x,y);
    // printf("O valor da soma eh %.2f: ", soma);
    return 0;
}