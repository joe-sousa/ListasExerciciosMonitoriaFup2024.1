#include<stdio.h>

float maior_numero(float vet[], int qtd, float maior){
    for(int j=0; j<qtd; j++){
        if(vet[j] > maior){
            maior=vet[j];
        }
    }
    return maior;
}

float menor_numero(float vet[], int qtd, float menor){
    for(int j=0; j<qtd; j++){
        if(vet[j] < menor){
            menor=vet[j];
        }
    }
    return menor;
}

int main(){
    float nota[5], maior=0, menor=1000;
    for(int i=0; i<5; i++){
        printf("Digite a nota:");
        scanf("%f", &nota[i]);
    }

    float bigger = maior_numero(nota, 5, maior);
    float minor = menor_numero(nota, 5, menor);
    printf("O maior numero é o %.1f\n", bigger);
    printf("O menor numero é o %.1f\n", minor);

    return 0;
}