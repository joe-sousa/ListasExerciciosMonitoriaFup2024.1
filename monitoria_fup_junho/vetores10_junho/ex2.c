#include<stdio.h>

float media_ponderada(float vet[], float peso[], int qtd){
    float sum=0, soma_peso=0;
    for(int j=0; j<qtd; j++){
        sum+=vet[j] * peso[j];//Soma da combinação da multiplicação entre nota e peso
        soma_peso+=peso[j];// Soma dos pesos
    }
    return soma_peso > 0 ? sum/soma_peso : 0;
}

int main(){
    float nota[5], peso[5];
    for(int i=0; i<5; i++){
        printf("Digite a nota:");
        scanf("%f", &nota[i]);
    }

    for(int i=0; i<5; i++){
        printf("Digite o peso:");
        scanf("%f", &peso[i]);
    }

    float res = media_ponderada(nota, peso, 5);
    printf("Media Ponderada: %.2f", res);

    return 0;
}