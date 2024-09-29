/**
 * 
 * Altere a questão anterior e crie um função “concatena”
 * que deverá receber os dois vetores em questão, porém,
 * ao invés de simplesmente copiar, deverá fazer a concatenação
 * da strings. Se a primeira tem “mamão” e a segunda “papaya”,
 * deverá imprimir “mamão papaya” ao final.
 * 
 * **/

#include<stdio.h>

//Primeiro parâmetro vetor de destino, segundo parâmetro vetor de origem.
void concatena(char *vet2, char *vet1){
    int i=0, j;//Contador i referente ao vetor de destino e j contador ao vetor de origem
    while (vet2[i] != '\0')
        i++;

    //printf("Quantidade de posições do vetor2 inicialmente %d ",i);

    /**
     * 
     * Laço que cumpre o papel de passar os elementos do vetor de origem para o
     * vetor de destino,a partir da ultima posição ocupada pelo vetor de destino
     * **/         
    for(j=0;vet1[j]!= '\0'; j++){
            vet2[i] = vet1[j];
            i++;
        }
    
    //printf("Quantidade de posições do vetor2 %d ",i);
    vet2[i]='\0';

    int k=0;

    while(vet2[k] != '\0')
    {   
        printf("%c ",vet2[k]);
        k++;
    }
}

int main(){
    char vetB[6] = {'m','a','m','a','o', '\0'};
    char vetA[13]={'p','a','p','a','y','a','\0'};
    concatena(vetB,vetA);//Passando o vetB como o vetor de destino no primeiro parâmetro

    return 0;
}