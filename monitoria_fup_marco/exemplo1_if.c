#include<stdio.h>

/**
 * 
 * 1) Mostrar código sem chaves com instrução simples
 * 2) Mostrar código com instruções em mais de uma linha e seus efeitos quando sem chaves.
 * 
*/
int main(){
    int idade=19;
    if(idade > 18)
        printf("Liberada entrada na Calourada.\n");
    else
        printf("ops, menor de idade detected.\n");
    return 0;
}