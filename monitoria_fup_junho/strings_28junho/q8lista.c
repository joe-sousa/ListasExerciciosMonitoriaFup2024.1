#include<stdio.h>

/**
 * 
 * Dado o código abaixo, adequar o código para que ao identificar
 *  um número no meio da string, crie outra função que receba um
 *  novo caractere, a posição da letra e o vetor de strings como
 *  parâmetro para substituir exatamente na posição do número essa nova letra.
 * 
 * 
 * **/

void permuteCarac(int pos, char *vector){
    char letter;
    if(pos >= 0){
        printf("Digite a letra que deseja inserir: ");
        scanf(" %c", &letter);
        vector[pos] = letter;
    }else{
        printf("Não há numeros na string. Sem alterações");
    }

    printf("Nome: \n");
    for(int i=0; vector[i]!= '\0'; i++){
        printf("%c ",vector[i]);
    }
    printf("\n");
}

int checkValidation(char var[]){
    int i=0,pos=-1;
    while(var[i] != '\0'){
        if(var[i]>= '0' && var[i]<='9'){
            pos=i;
        }
    i++;        
    }
    
    return pos;
}

int main(){
    printf("Digite um nome: ");
    char nome[15];
    scanf("%[^\n]", nome);

    printf("Nome lido da string: %s\n", nome);
    int posicao = checkValidation(nome);  
    permuteCarac(posicao,  nome);
    return 0;
}