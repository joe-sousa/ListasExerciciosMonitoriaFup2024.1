// Preencha um vetor de inteiros positivos Q dados pelo usuário com 20 posições (aceitar somente
// inteiros positivos). Identifique a seguir qual o maior elemento de Q e a respectiva posição que ele
// ocupa no vetor
#include<stdio.h>

void feedVector(int number[]){
    for(int j=0; j< 5; j++){
        printf("Please insert a number: ");
        scanf("%d", &number[j]);
    }
}

void checkBigger(int number[]){
    int maior = number[0], pos; 
    for (int i = 1; i < 5; i++) {
        if (number[i] > maior) { 
            maior = number[i];//10
            pos=i;
        }
    }
    printf("Maior: %d, posição %d\n", maior, pos+1);
}

void checkMinor(int number[]){
    int menor = number[0], pos;
    for (int i = 1; i < 5; i++) {
        if (number[i] < menor) { 
            menor = number[i];
            pos=i;
            
        }
    }
    printf("Menor: %d e posição %d ", menor, pos+1);
 }

int main(){
    int numbers[5];
    feedVector(numbers);
    checkBigger(numbers);
    checkMinor(numbers);
    return 0;
}