#include<stdio.h>

int main(){
    /* 2º exemplo leitura de string*/
    printf("Digite um nome \n");
    char nome2[30];
    scanf(" %[^\n]", nome2);
    
    printf("Nome lido da string 2: %s \n", nome2);
    return 0;
}