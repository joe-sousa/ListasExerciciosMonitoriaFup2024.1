#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10

//  Gere um vetor A de tamanho 20 com números inteiros aleatórios entre 0 e 10 e receba do usuário um
// inteiro x. Indique quantas vezes x aparece no vetor, em quais posições ele aparece e gere um vetor B
// com os elementos de A removendo os valores x

void generateNewVector(int vetor[], int size){
    for(int i=0; i<size; i++){
       vetor[i]=rand()%11;  
    }
}

void printVector(int vetor[], int size) {
    printf("Vetor: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int countRepetitionNumbers(int vetor[], int size, int number) {
    int counter = 0;
    printf("Posições de %d no vetor: ", number);
    for(int i = 0; i < size; i++) {
        if(vetor[i] == number) {
            printf("%d ", i); // Imprime a posição
            counter++;
        }
    }
    printf("\n");
    return counter;
}

void generateNewVector2(int vetor[], int size, int number) {
    int newSize = 0;

    for(int i = 0; i < size; i++) {
        if(vetor[i] != number) {
            newSize++;
        }
    }

    int vetB[newSize];
    int index = 0;

    // Copiar elementos diferentes de 'number' para vetB
    for(int i = 0; i < size; i++) {
        if(vetor[i] != number) {
            vetB[index++] = vetor[i];
        }
    }

    printf("Vetor B atualizado (sem %d): ", number);
    for(int i = 0; i < newSize; i++) {
        printf("%d ", vetB[i]);
    }
    printf("\n");
}



int main(){
    srand(time(NULL));
    int vet1[MAX], number;
    generateNewVector(vet1, MAX);
    printVector(vet1, MAX);

    printf("Digite um numero para procurar no vetor: ");
    scanf("%d", &number);

    int occurrences = countRepetitionNumbers(vet1, MAX, number);
    printf("Numero %d apareceu %d vezes.\n", number, occurrences);

    generateNewVector2(vet1, MAX, number);

    return 0;
}