#include<stdio.h>

int main(){
    //declaração de vetores com tam fixo e variavel multiplicativa
    int vet1[5];
    
    //Alimentação do vetor 1
    for(int i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet1[i]);
    }

    for(int i=4; i>=0; i--){ //0-1-2-3-4
        printf("%d\n", vet1[i]);
    }

    return 0;
}