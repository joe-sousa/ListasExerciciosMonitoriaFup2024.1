#include<stdio.h>

char minuscula(char var){        
    if(var >= 'A' && var <= 'Z'){
        var=var-'A'+'a';
    }
    printf("Nova letra minuscula: %c\n", var);
    return var;
}

int main(){
    printf("Digite uma letra: ");
    char nome;
    scanf("%c", &nome);
    minuscula(nome);
    return 0;
}