#include<stdio.h>

int checkValidation(char var[]){
    int i=0, count=0;
    while(var[i] != '\0'){
        if(var[i]>= '0' && var[i]<='9'){
            count++;
        }
    i++;        
    }

    if(count == 0)
        printf("Não possui numeros\n");
    else
        printf("Possui numeros\n");
    return count;
}

int main(){
    printf("Digite um nome: ");
    char nome[15];
    scanf("%[^\n]", nome);

    printf("Nome lido da string: %s\n", nome);
    checkValidation(nome);    
    return 0;
}