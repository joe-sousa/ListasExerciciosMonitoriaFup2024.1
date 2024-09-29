#include<stdio.h>
#include<math.h>
#define AP 7
#define AF 4

int main(){

    // printf("**** Definindo tamanho do vetor e inicialização de vetor entre chaves ****\n");
    // printf("\n");
    // int v1[5] = {1,3,5,7,9}; //3
    // int v2[4] = {2,4,6,8}; //2
    // int v5[3];

    // printf("Elemento de posição 0 no Vetor 1: %i\n", v1[0]);
    // printf("Elemento de posição 3 no Vetor 2:%i\n", v2[3]);
    // printf("Soma de Elemento na posição 4 do Vetor 1 com Elemento de posição 2 no Vetor 2: %i\n", v1[4]+v2[2]);
    // printf("Soma de Elemento na posição 5 de Vetor 1 com Elemento na posição 0 de Vetor 2: %i\n", v1[5]+v2[0]);
    // printf("Subtração de Elemento na posição 4 de Vetor 1 com Elemento de posião 0 do Vetor 2: %i\n", v1[4]-v2[0]);
    // printf("Multiplicação de Elemento na posição 1 de Vetor 1 com Elemento na posição 0 de Vetor 2: %i\n", v1[1]*v2[0]);
    // printf("\n");
    // printf("**** Declaração sem definir vetor e inicializando em seguida *****\n");
    // int v3[] = {10,30,50,70,90};
    // int v4[] = {20,40,60,80};

    // printf("Vetor 3 na posição 0 possui valor %i\n", v3[3]);
    // printf("Vetor 4 na posição 2 possui valor %i\n", v4[2]);

    int nota[5], counterRep=0, counterAp=0, counterAf=0;
    float soma=0;
    int i;
    
    for (i=0; i<5; i++)
    {
    printf("Nota do aluno %d:", i+1);
    scanf("%d",&nota[i]);
        soma+=nota[i];
    }

    // float media = soma/5;
    // printf("A media das notas dos alunos foi de: %.2f\n", media);

    // printf("*****************\n");

    // int j;
    // for (j=0; j<5; j++)
    // {
    //     if(nota[j]%2 == 0){
    //         printf("Notas impares %d: %d\n", j+1, nota[j]);
    //     }
    // }

    for (i=0; i<5; i++)
    {
        if(nota[i] >=AP){
            counterAp++;
        }else if(nota[i] >= AF && nota[i] <AP){
            counterAf++;
        }else{
            counterRep++;
        }
    }

    printf("Temos %d alunos aprovados\n", counterAp);
    printf("Temos %d alunos de Avaliação Final\n", counterAf);
    printf("Temos %d alunos de Reprovados\n", counterRep);

    // printf("Vetor possui valor %d:", nota[7]);

    return 0;
}