#include<stdio.h>

char maiuscula(char var){        
    if(var >= 'a' && var <= 'z'){
        var=var-'a'+'A';
    }
    printf("Nova letra maiuscula: %c\n", var);
    return var;
}

int main(){
    printf("Digite uma letra: ");
    char nome;
    scanf("%c", &nome);
    maiuscula(nome);
    return 0;
}