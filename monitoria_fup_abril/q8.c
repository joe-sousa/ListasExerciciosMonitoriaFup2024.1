#include<stdio.h>

/**
 * Desenvolva um programa que calcule o fatorial de um número inteiro positivo dado pelo usuário. 
 * Ex.:   5! = 5*4*3*2*1 = 120.
 **/
 
int main(){
    int valor;
    printf("Digite o valor ");
    scanf("%d", &valor);
    
    int fat=1;

    while(valor != 0){
        fat*=valor; 
        valor--;
    }
    
    printf("%d\n", fat);

    return 0;
}