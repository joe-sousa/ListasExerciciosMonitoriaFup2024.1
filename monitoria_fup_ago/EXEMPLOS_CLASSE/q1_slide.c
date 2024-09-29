#include<stdio.h>
#include<stdlib.h>

//Leia um vetor de 10 notas e calcule a média delas

float calcMedia(float *vet1, float *vet2, int tam){
    float somaPeso=0, numeradorMedia=0;
    for(int i=0; i<tam; i++){
        printf("Digite a nota %d ", i);
        scanf("%f", &vet1[i]);

        printf("Digite o peso %d ", i);
        scanf("%f", &vet2[i]);

        numeradorMedia+=vet1[i] * vet2[i];
        somaPeso+=vet2[i];
    }

    return numeradorMedia/somaPeso;
}

int main(){
    int tam=3;
    float notas[tam], pesos[tam];

    float media = calcMedia(notas, pesos, tam);
    printf("%f", media);

    return 0;
}