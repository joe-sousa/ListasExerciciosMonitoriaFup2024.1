/**
 * 
 * Crie vetorA e vetorB, após alimentar o vetorA uma string,
 * crie uma função para fazer a cópia do vetorA para o vetorB,
 * tenha o cuidado de ambos terem o mesmo tamanho e após fazer
 * a cópia, faça o fechamento a cadeia copiada, ou seja, o vetorB
 * deverá ter ao final o caractere ‘\0’. 
 * 
 * **/

#include<stdio.h>

void clone(char *vet1,char *vet2){
    int i=0;
    while (vet1[i] != '\0')
    {   
        vet2[i] = vet1[i];
        i++;
    }

    printf("Posicao do i antes de imprimir %d\n", i);
    vet2[i] = '\0';

    int j = 0;

    while (vet2[j] != '\0')
    {   
        printf("%c ",vet2[j]);
        j++;
    }

    printf("\n");
    
}

int main(){
    char vetA[6] = {'0','2','4','6','8', '\0'};
    char vetB[6];
    clone(vetA,vetB);

    return 0;
}