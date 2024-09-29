#include<stdio.h>

void feedArray(int vet1[], int vet2[], int num){
    for(int i=0; i<num; i++){
        printf("Digite um numero para o vetor 1: ");
        scanf("%d", &vet1[i]);    
    }

    for(int i=0; i<num; i++){
        printf("Digite um numero para o vetor 2: ");
        scanf("%d", &vet2[i]);    
    }
}

void printArray(int vet1[], int vet2[], int vet3[], int num){
    for(int i=0; i<num; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    for(int i=0; i<num; i++){
        printf("Numero %d do vetor 3 %d\n", i+1, vet3[i]);
    }
}

int main(){
    int num;

    printf("Digite um numero para o tamanho do vetor: ");
    scanf("%d", &num);
    
    int vet1[num];
    int vet2[num];
    int vet3[num];
    

    feedArray(vet1, vet2, num);

    for (int i = 0; i < num; i++)
    {
        printf("Numero do vetor 1: %d\n", vet1[i]);
    }

    printf("\n");

    for (int i = 0; i < num; i++)
    {
        printf("Numero do vetor 2: %d\n", vet2[i]);
    }

    printf("\n");

    printArray(vet1, vet2, vet3, num);
    
    return 0;
}