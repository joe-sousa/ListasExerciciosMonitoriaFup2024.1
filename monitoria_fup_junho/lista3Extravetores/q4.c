#include<stdio.h>

int main(){
    //declaração de vetores com tam fixo e variavel multiplicativa
    int vet1[5], vet2[5], x;
    
    //Alimentação do vetor 1
    for(int i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet1[i]);
    }

    //impressao do vetor 1
    for(int i=0; i<5; i++){
        printf("Vetor 1: %d\n", vet1[i]);
    }

    //Letitura do numero multiplicativo
    printf("Digite o numero para se multiplicado ");
    scanf("%d", &x);

    printf("\n");
    
    //Operação de multiplicacao dos elementos do vetor 1 por x
    for(int i=0; i<5; i++){
        vet2[i]=vet1[i]*x;
    }

    //Impressao dos elementos do vetor 2
    for(int i=0; i<5; i++){
        printf("Vetor 2: %d\n", vet2[i]);
    }

    return 0;
}