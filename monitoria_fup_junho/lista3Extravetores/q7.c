// Considere que a temperatura média em Crateús a cada dia é um número aleatório entre 22 e 40 graus
// Celsius. Faça um algoritmo que preencha um vetor com a temperatura de cada dia de um mês com 31
// dias (valores aleatórios) e informe:
// a) o dia do mês que teve a menor temperatura e qual foi essa temperatura;
// b) o dia do mês que teve a maior temperatura e qual foi essa temperatura;
// c) a temperatura média do mês;
// d) quantos dias a temperatura ficou acima da média
// e) quantos dias a temperatura ficou abaixo da média.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void feedTemp(float temp[]){
    srand(time(NULL));
    int i=0;
    while(i<31){
        temp[i] = 22 + rand()% 19; 
        i++;
    }
}

void printTemp(float temp[]){
    for(int i=0; i < 31; i++){
        printf("Dia %d: Temperatura foi de %.1f\n", i+1, temp[i]);
    }
}

void biggerTemp(float temp[]){
    float maior = 0;
    int pos;
    maior = temp[0];
    for(int i=1; i<31; i++){
        if(maior < temp[i]){
            maior = temp[i];
            pos = i;
        }
    }
    printf("Maior %1.f no dia %d\n", maior, pos + 1);
}

void minorTemp(float temp[]){
    float menor = temp[0];
    int pos;
    for(int i=1; i<31; i++){
        if(menor > temp[i]){
            menor = temp[i];
            pos = i;
        }
    }
    printf("Menor %1.f no dia %d\n", menor, pos + 1);
}

void mediaTemp(float temp[]){
    float media = 0, soma=0, counter1=0, counter2=0;
    for(int i=1; i<31; i++){
        soma+=temp[i];
    }
    media=soma/31;

    for(int i=1; i<31; i++){
        if(temp[i] >= media){
            counter1++;
        }else{
            counter2++;
        }
    }

    printf("Media %1.f\n", media);

    printf("Tivemos %.0f dias acima da media.\n", counter1);
    printf("Tivemos %.0f dias abaixo da media.\n", counter2);
}



int main(){
    float varTemp[31];
    feedTemp(varTemp);
    printTemp(varTemp);
    biggerTemp(varTemp);
    minorTemp(varTemp);
    mediaTemp(varTemp);
    return 0;
}