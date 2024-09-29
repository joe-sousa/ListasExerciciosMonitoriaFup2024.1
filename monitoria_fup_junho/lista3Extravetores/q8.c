#include<stdio.h>
#include<stdlib.h>

// 8. Faça um algoritmo que receba um vetor A com 6 números inteiros e ordene estes valores em ordem
// crescente no vetor, ou seja, A[0] deverá ficar com o menor valor e A[5] com o maior valor.
// • Dica: Compare A[0] e A[1], troque os valores caso A[0] seja maior que A[1] e repita este processo
// com A[1] e A[2], A[2] e A[3] etc... note que o maior valor irá se deslocando para o final do vetor.
// Repetindo essas comparações algumas vezes levará à ordenação do vetor.

int main(){
    int vet1[6] = {9, 2, 3, 10, 7, 1};
    
    int n=6;
    do{
        for(int i=0; i<n-1; i++){
            if(vet1[i] > vet1[i+1]){
                int temp=vet1[i];
                vet1[i] = vet1[i+1];
                vet1[i+1]= temp;
            }
        }
        n--;
    }while (n>1);
    
    for(int i=0; i<6; i++){
        printf("%d\n", vet1[i]);   
    }
    return 0;
}